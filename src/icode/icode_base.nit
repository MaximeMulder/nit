# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Base classes for Nit intermediate code representation
package icode_base

import metamodel
import mmloader

## UTILITY CLASSES ##

# Register store local variable and intermediate results
class IRegister
	# The static type
	readable var _stype: MMType
	init(s: MMType)
	do
		_stype = s
	end
end

# A Closure declaration
class IClosureDecl
	# The associated closure definition
	readable var _closure: MMClosure

	# The default implementation
	readable writable var _default: nullable IRoutine

	init(c: MMClosure) do _closure = c
end

# A routine is a sequence of icodes with entry iregisters (params) and an exit iregister (result)
class IRoutine
	# The parameters of the routine
	readable var _params: Sequence[IRegister]

	# The closure declared
	readable writable var _closure_decls: nullable Sequence[IClosureDecl] = null

	# The result of the routine
	readable var _result: nullable IRegister

	# The sequence of icode
	readable var _body: ISeq = new ISeq

	# The location of the iroutine (if any)
	readable writable var _location: nullable Location = null

	init(p: Sequence[IRegister], r: nullable IRegister)
	do
		_params = p.to_a
		_result = r
	end
end

# A closure definition in a iroutine body
class IClosureDef
special IRoutine
	init(p: Array[IRegister], r: nullable IRegister)
	do
		super(p, r)
	end
end

## INTERMEDIATE CODE ##

# The root of the intermediate code representation
abstract class ICode
	# The number of registers used by the icode
	fun arity: Int is abstract

	# The result of the icode (if any)
	readable writable var _result: nullable IRegister = null

	# The location of the icode (if any)
	readable writable var _location: nullable Location = null

	# Is the icode side effect free?
	fun is_pure: Bool do return false
end

# An icode that uses no registers (no args)
abstract class ICode0
special ICode
	redef fun arity do return 0
end

# An icode that uses a single register (1 arg)
abstract class ICode1
special ICode
	redef fun arity do return 1

	# The single argument
	readable var _expr: IRegister

	init(e: IRegister) do _expr = e
end

# An icode that uses two single registers (2 args)
abstract class ICode2
special ICode
	redef fun arity do return 2

	# The first argument
	readable var _expr1: IRegister

	# The second argument
	readable var _expr2: IRegister

	init(e1, e2: IRegister)
	do
		_expr1 = e1
		_expr2 = e2
	end
end

# An icode that uses a variable number of registers (n args) and a variable number of closure definitions
abstract class ICodeN
special ICode
	redef fun arity do return _exprs.length

	# All arguments
	readable var _exprs: Sequence[IRegister]

	# All closure definition
	readable writable var _closure_defs: nullable Sequence[nullable IClosureDef]

	init(e: nullable Sequence[IRegister])
	do
		if e == null then
			_exprs = new Array[IRegister]
		else
			_exprs = e
		end
	end
end

#################################################

# A linear sequence of ICode
class ISeq
special ICode0
	# The sequence of icode
	readable var _icodes: List[ICode] = new List[ICode]
	init do end
end

# An infinite loop of ICode
# Use IEscape to exit
class ILoop
special ISeq
	init do end
end

# A Condidianal if-then-else statement
# expr is the condition
class IIf
special ICode1
	# The 'then' sequence of icode
	readable var _then_seq: ISeq = new ISeq
	# The 'else' sequence of icode
	readable var _else_seq: ISeq = new ISeq
	init(e: IRegister) do super
end

# Escape to to end of a parent sequence
class IEscape
special ICode0
	# The seqeuence to escape
	# The control flow continues at the next icode after the sequence
	readable var _seq: ISeq
	init(seq: ISeq) do _seq = seq
end

# An abort statement
class IAbort
special ICode0
	# The reason the abort occured
	# tests.first is the format
	readable var _texts: Array[String]
	# The local property that has the abort (if any)
	readable var _property_location: nullable MMLocalProperty
	# The module that has the abort
	readable var _module_location: MMModule
	init(t: Array[String], pl: nullable MMLocalProperty, ml: MMModule)
	do
		_texts = t
		_property_location = pl
		_module_location = ml
	end
end

#################################################

# The root of all method invocations
abstract class IAbsCall
special ICodeN
	# The called method
	readable var _property: MMMethod

	init(p: MMMethod, e: Sequence[IRegister])
	do
		super(e)
		_property = p
	end
end

# A simple procedure or function call
# exprs.first is the reciever, other are arguments
class ICall
special IAbsCall
	init(p, e) do super
end

# A super method call
# exprs.first is the reciever, other are arguments
class ISuper
special IAbsCall
	init(p, e) do super
end

# An instantiation
# no reciever, all exprs are arguments
class INew
special ICall
	# The type to instantiate
	readable var _stype: MMType
	init(t: MMType, p: MMMethod, a: Sequence[IRegister])
	do
		super(p, a)
		_stype = t
	end
end

# A closure call
# exprs are the arguments
class IClosCall
special ICodeN
	# The called closure
	readable var _closure_decl: IClosureDecl

	# The !break sequence (if any)
	readable writable var _break_seq: nullable ISeq = null

	init(c: IClosureDecl, e: Sequence[IRegister])
	do
		super(e)
		_closure_decl = c
	end
end

# A native C code
# Mainly used to implements things that do not have a specific ICode yet
# expr are the arguments
class INative
special ICodeN
	# The native C code
	# Special character sequence '@@@' will be substitued in order with the arguments
	readable var _code: String

	init(c: String, e: nullable Sequence[IRegister])
	do
		super(e)
		_code = c
	end

	redef readable writable var _is_pure: Bool = false
end

# A register assigment
# expr is the assigned value
# result is the register assigned
class IMove
special ICode1
	init(r: IRegister, e: IRegister)
	do
		super(e)
		_result = r
	end

	redef fun is_pure do return true
end

# An attribute read access
# expr is the reciever
class IAttrRead
special ICode1
	# The accessed attribute
	readable var _property: MMAttribute

	init(p: MMAttribute, r: IRegister)
	do
		super(r)
		_property = p
	end

	redef fun is_pure do return true
end

# An attribute assignment
# expr1 is the receiver, expr2 is the assigned value
class IAttrWrite
special ICode2
	# The accessed attribute
	readable var _property: MMAttribute

	init(p: MMAttribute, r: IRegister, v: IRegister)
	do
		super(r, v)
		_property = p
	end
end


# An attribute is_set check
# expr is the reciever
class IAttrIsset
special ICode1
	# The accessed attribute
	readable var _property: MMAttribute

	init(p: MMAttribute, r: IRegister)
	do
		super(r)
		_property = p
	end

	redef fun is_pure do return true
end

# A type check
# expr is the expression checked
class ITypeCheck
special ICode1
	# The static type checkes to
	readable var _stype: MMType

	init(e: IRegister, t: MMType)
	do
		super(e)
		_stype = t
	end

	redef fun is_pure do return true
end

# The 'is' operator
# expr1 and expr2 are both operands
class IIs
special ICode2
	init(e1, e2: IRegister)
	do
		super
	end

	redef fun is_pure do return true
end

# The unary 'not' operation
# expr is the operand
class INot
special ICode1
	init(e: IRegister)
	do
		super
	end

	redef fun is_pure do return true
end

# Evaluate body once them return the same value again and again
# if result is not null, then it must also be assigned in the body
class IOnce
special ICode0
	readable var _body: ISeq = new ISeq
	init do end
end

# Is a closure given as a parameter?
class IHasClos
special ICode0
	# The called closure
	readable var _closure_decl: IClosureDecl

	init(c: IClosureDecl)
	do
		_closure_decl = c
	end

	redef fun is_pure do return true
end

#################################################

redef class MMAttribute
	# The attached initialisation iroutine if any
	# To call between the allocate-instance and the initialize-instance
	fun iroutine: nullable IRoutine is abstract
end

redef class MMMethod
	# The attached body iroutine if any
	fun iroutine: nullable IRoutine is abstract
end
