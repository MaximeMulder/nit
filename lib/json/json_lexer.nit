# Lexer generated by nitcc for the grammar json
module json_lexer is no_warning "missing-doc"
import nitcc_runtime
import json_parser
class Lexer_json
	super Lexer
	redef fun start_state do return dfastate_0
end
private fun dfastate_0: DFAState0 do return once new DFAState0
private fun dfastate_1: DFAState1 do return once new DFAState1
private fun dfastate_2: DFAState2 do return once new DFAState2
private fun dfastate_3: DFAState3 do return once new DFAState3
private fun dfastate_4: DFAState4 do return once new DFAState4
private fun dfastate_5: DFAState5 do return once new DFAState5
private fun dfastate_6: DFAState6 do return once new DFAState6
private fun dfastate_7: DFAState7 do return once new DFAState7
private fun dfastate_8: DFAState8 do return once new DFAState8
private fun dfastate_9: DFAState9 do return once new DFAState9
private fun dfastate_10: DFAState10 do return once new DFAState10
private fun dfastate_11: DFAState11 do return once new DFAState11
private fun dfastate_12: DFAState12 do return once new DFAState12
private fun dfastate_13: DFAState13 do return once new DFAState13
private fun dfastate_14: DFAState14 do return once new DFAState14
private fun dfastate_15: DFAState15 do return once new DFAState15
private fun dfastate_16: DFAState16 do return once new DFAState16
private fun dfastate_17: DFAState17 do return once new DFAState17
private fun dfastate_18: DFAState18 do return once new DFAState18
private fun dfastate_19: DFAState19 do return once new DFAState19
private fun dfastate_20: DFAState20 do return once new DFAState20
private fun dfastate_21: DFAState21 do return once new DFAState21
private fun dfastate_22: DFAState22 do return once new DFAState22
private fun dfastate_23: DFAState23 do return once new DFAState23
private fun dfastate_24: DFAState24 do return once new DFAState24
private fun dfastate_25: DFAState25 do return once new DFAState25
private fun dfastate_26: DFAState26 do return once new DFAState26
private fun dfastate_27: DFAState27 do return once new DFAState27
private fun dfastate_28: DFAState28 do return once new DFAState28
private fun dfastate_29: DFAState29 do return once new DFAState29
private fun dfastate_30: DFAState30 do return once new DFAState30
private fun dfastate_31: DFAState31 do return once new DFAState31
private fun dfastate_32: DFAState32 do return once new DFAState32
private fun dfastate_33: DFAState33 do return once new DFAState33
private fun dfastate_34: DFAState34 do return once new DFAState34
class MyNToken
	super NToken
end
private class DFAState0
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 8 then return null
		if c <= 10 then return dfastate_1
		if c <= 31 then return null
		if c <= 32 then return dfastate_1
		if c <= 33 then return null
		if c <= 34 then return dfastate_2
		if c <= 43 then return null
		if c <= 44 then return dfastate_3
		if c <= 45 then return dfastate_4
		if c <= 47 then return null
		if c <= 57 then return dfastate_5
		if c <= 58 then return dfastate_6
		if c <= 90 then return null
		if c <= 91 then return dfastate_7
		if c <= 92 then return null
		if c <= 93 then return dfastate_8
		if c <= 101 then return null
		if c <= 102 then return dfastate_9
		if c <= 109 then return null
		if c <= 110 then return dfastate_10
		if c <= 115 then return null
		if c <= 116 then return dfastate_11
		if c <= 122 then return null
		if c <= 123 then return dfastate_12
		if c <= 124 then return null
		if c <= 125 then return dfastate_13
		return null
	end
end
private class DFAState1
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		return null
	end
	redef fun trans(char) do
		var c = char.ascii
		if c <= 8 then return null
		if c <= 10 then return dfastate_1
		if c <= 31 then return null
		if c <= 32 then return dfastate_1
		return null
	end
end
private class DFAState2
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 33 then return dfastate_2
		if c <= 34 then return dfastate_29
		if c <= 91 then return dfastate_2
		if c <= 92 then return dfastate_30
		return dfastate_2
	end
end
private class DFAState3
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39d_44d_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState4
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_5
		return null
	end
end
private class DFAState5
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new Nnumber
		t.position = position
		t.text = text
		return t
	end
	redef fun trans(char) do
		var c = char.ascii
		if c <= 45 then return null
		if c <= 46 then return dfastate_24
		if c <= 47 then return null
		if c <= 57 then return dfastate_5
		if c <= 68 then return null
		if c <= 69 then return dfastate_25
		if c <= 100 then return null
		if c <= 101 then return dfastate_25
		return null
	end
end
private class DFAState6
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39d_58d_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState7
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39d_91d_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState8
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39d_93d_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState9
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 96 then return null
		if c <= 97 then return dfastate_20
		return null
	end
end
private class DFAState10
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 116 then return null
		if c <= 117 then return dfastate_17
		return null
	end
end
private class DFAState11
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 113 then return null
		if c <= 114 then return dfastate_14
		return null
	end
end
private class DFAState12
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39d_123d_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState13
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39d_125d_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState14
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 116 then return null
		if c <= 117 then return dfastate_15
		return null
	end
end
private class DFAState15
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 100 then return null
		if c <= 101 then return dfastate_16
		return null
	end
end
private class DFAState16
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39dtrue_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState17
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 107 then return null
		if c <= 108 then return dfastate_18
		return null
	end
end
private class DFAState18
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 107 then return null
		if c <= 108 then return dfastate_19
		return null
	end
end
private class DFAState19
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39dnull_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState20
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 107 then return null
		if c <= 108 then return dfastate_21
		return null
	end
end
private class DFAState21
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 114 then return null
		if c <= 115 then return dfastate_22
		return null
	end
end
private class DFAState22
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 100 then return null
		if c <= 101 then return dfastate_23
		return null
	end
end
private class DFAState23
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new N_39dfalse_39d
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState24
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_28
		return null
	end
end
private class DFAState25
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 42 then return null
		if c <= 43 then return dfastate_26
		if c <= 44 then return null
		if c <= 45 then return dfastate_26
		if c <= 47 then return null
		if c <= 57 then return dfastate_27
		return null
	end
end
private class DFAState26
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_27
		return null
	end
end
private class DFAState27
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new Nnumber
		t.position = position
		t.text = text
		return t
	end
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_27
		return null
	end
end
private class DFAState28
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new Nnumber
		t.position = position
		t.text = text
		return t
	end
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_28
		if c <= 68 then return null
		if c <= 69 then return dfastate_25
		if c <= 100 then return null
		if c <= 101 then return dfastate_25
		return null
	end
end
private class DFAState29
	super DFAState
	redef fun is_accept do return true
	redef fun make_token(position, text) do
		var t = new Nstring
		t.position = position
		t.text = text
		return t
	end
end
private class DFAState30
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 33 then return null
		if c <= 34 then return dfastate_2
		if c <= 46 then return null
		if c <= 47 then return dfastate_2
		if c <= 91 then return null
		if c <= 92 then return dfastate_2
		if c <= 97 then return null
		if c <= 98 then return dfastate_2
		if c <= 101 then return null
		if c <= 102 then return dfastate_2
		if c <= 109 then return null
		if c <= 110 then return dfastate_2
		if c <= 113 then return null
		if c <= 114 then return dfastate_2
		if c <= 115 then return null
		if c <= 116 then return dfastate_2
		if c <= 117 then return dfastate_31
		return null
	end
end
private class DFAState31
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_32
		if c <= 64 then return null
		if c <= 90 then return dfastate_32
		if c <= 96 then return null
		if c <= 122 then return dfastate_32
		return null
	end
end
private class DFAState32
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_33
		if c <= 64 then return null
		if c <= 90 then return dfastate_33
		if c <= 96 then return null
		if c <= 122 then return dfastate_33
		return null
	end
end
private class DFAState33
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_34
		if c <= 64 then return null
		if c <= 90 then return dfastate_34
		if c <= 96 then return null
		if c <= 122 then return dfastate_34
		return null
	end
end
private class DFAState34
	super DFAState
	redef fun trans(char) do
		var c = char.ascii
		if c <= 47 then return null
		if c <= 57 then return dfastate_2
		if c <= 64 then return null
		if c <= 90 then return dfastate_2
		if c <= 96 then return null
		if c <= 122 then return dfastate_2
		return null
	end
end
