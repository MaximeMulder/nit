/* This C file is generated by NIT to compile module analysis___inline_get_and_set. */
#include "analysis___inline_get_and_set._sep.h"
void analysis___inline_get_and_set___Program___dump_inline_get_set(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  static val_t once_value_4; /* Once value */
  static val_t once_value_5; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_get_and_set;
  fra.me.line = 28;
  fra.me.meth = LOCATE_analysis___inline_get_and_set___Program___dump_inline_get_set;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//inline_get_and_set.nit:30 */
  REGB0 = TAG_Int(5);
  fra.me.REG[2] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[3] = BOX_NativeString("");
    REGB0 = TAG_Int(0);
    fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
    once_value_1 = fra.me.REG[3];
    register_static_object(&once_value_1);
  } else fra.me.REG[3] = once_value_1;
  fra.me.REG[3] = fra.me.REG[3];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("/");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[1] = CALL_program___Program___main_module(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMModule___name(fra.me.REG[1])(fra.me.REG[1]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString(".inline_get_set.log");
    REGB0 = TAG_Int(19);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[2] = CALL_standard___string___Object___to_s(fra.me.REG[2])(fra.me.REG[2]);
  fra.me.REG[2] = NEW_OFStream_standard___file___OFStream___open(fra.me.REG[2]);
  /* ./analysis//inline_get_and_set.nit:32 */
  REGB0 = TAG_Int(3);
  fra.me.REG[1] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_4) {
    fra.me.REG[3] = BOX_NativeString("Number of getters and setters inlined: ");
    REGB0 = TAG_Int(39);
    fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
    once_value_4 = fra.me.REG[3];
    register_static_object(&once_value_4);
  } else fra.me.REG[3] = once_value_4;
  fra.me.REG[3] = fra.me.REG[3];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
  REGB0 = TAG_Bool(ATTR_analysis___inline_get_and_set___Program____number_getter_setter_inlined(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_number_getter_setter_inlined", LOCATE_analysis___inline_get_and_set, 32);
  }
  REGB0 = ATTR_analysis___inline_get_and_set___Program____number_getter_setter_inlined(fra.me.REG[0]);
  fra.me.REG[0] = CALL_standard___string___Object___to_s(REGB0)(REGB0);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  if (!once_value_5) {
    fra.me.REG[0] = BOX_NativeString("\n");
    REGB0 = TAG_Int(1);
    fra.me.REG[0] = NEW_String_standard___string___String___with_native(fra.me.REG[0], REGB0);
    once_value_5 = fra.me.REG[0];
    register_static_object(&once_value_5);
  } else fra.me.REG[0] = once_value_5;
  fra.me.REG[0] = fra.me.REG[0];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
  CALL_standard___stream___OStream___write(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  /* ./analysis//inline_get_and_set.nit:34 */
  CALL_standard___stream___IOS___close(fra.me.REG[2])(fra.me.REG[2]);
  stack_frame_head = fra.me.prev;
  return;
}
void analysis___inline_get_and_set___Program___inline_get_set(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_get_and_set;
  fra.me.line = 37;
  fra.me.meth = LOCATE_analysis___inline_get_and_set___Program___inline_get_set;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  CALL_program___Program___with_each_iroutines(fra.me.REG[0])(fra.me.REG[0], (&(fra.me)), ((fun_t)OC_analysis___inline_get_and_set___Program___inline_get_set_1));
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_analysis___inline_get_and_set___Program___inline_get_set_1(struct stack_frame_t *closctx, val_t p0, val_t p1){
    struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
    val_t REGB0;
    val_t REGB1;
    val_t tmp;
    /* ./analysis//inline_get_and_set.nit:38 */
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_analysis___inline_get_and_set;
    fra.me.line = 38;
    fra.me.meth = LOCATE_analysis___inline_get_and_set___Program___inline_get_set;
    fra.me.has_broke = 0;
    fra.me.REG_size = 2;
    fra.me.nitni_local_ref_head = NULL;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[0] = p0;
    fra.me.REG[1] = p1;
    /* ./analysis//inline_get_and_set.nit:39 */
    fra.me.REG[1] = NEW_InlineGetSetVisitor_analysis___inline_get_and_set___InlineGetSetVisitor___init(fra.me.REG[1], fra.me.REG[0]);
    /* ./analysis//inline_get_and_set.nit:40 */
    CALL_icode___icode_tools___ICodeVisitor___visit_iroutine(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    /* ./analysis//inline_get_and_set.nit:42 */
    REGB0 = ATTR_analysis___inline_get_and_set___Program____number_getter_setter_inlined(closctx->REG[0]);
    REGB1 = CALL_analysis___inline_get_and_set___InlineGetSetVisitor___number_inlined(fra.me.REG[1])(fra.me.REG[1]);
    /* ./../lib/standard//kernel.nit:235 */
    REGB1 = TAG_Int(UNTAG_Int(REGB0)+UNTAG_Int(REGB1));
    /* ./analysis//inline_get_and_set.nit:42 */
    ATTR_analysis___inline_get_and_set___Program____number_getter_setter_inlined(closctx->REG[0]) = REGB1;
    stack_frame_head = fra.me.prev;
    return;
  }
val_t analysis___inline_get_and_set___InlineGetSetVisitor___number_inlined(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_get_and_set;
  fra.me.line = 50;
  fra.me.meth = LOCATE_analysis___inline_get_and_set___InlineGetSetVisitor___number_inlined;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//inline_get_and_set.nit:50 */
  REGB0 = TAG_Bool(ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____number_inlined(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_number_inlined", LOCATE_analysis___inline_get_and_set, 50);
  }
  REGB0 = ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____number_inlined(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
void analysis___inline_get_and_set___InlineGetSetVisitor___visit_icode(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[9];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_get_and_set;
  fra.me.line = 52;
  fra.me.meth = LOCATE_analysis___inline_get_and_set___InlineGetSetVisitor___visit_icode;
  fra.me.has_broke = 0;
  fra.me.REG_size = 10;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[5] = NIT_NULL;
  fra.me.REG[6] = NIT_NULL;
  fra.me.REG[7] = NIT_NULL;
  fra.me.REG[8] = NIT_NULL;
  fra.me.REG[9] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//inline_get_and_set.nit:52 */
  fra.me.REG[2] = fra.me.REG[0];
  fra.me.REG[3] = fra.me.REG[1];
  /* ./analysis//inline_get_and_set.nit:55 */
  REGB0 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___ICall, ID_icode___icode_base___ICall)) /*cast ICall*/;
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 55);
    }
    REGB0 = CALL_icode___icode_base___IAbsCall___is_explicit_from_extern(fra.me.REG[3])(fra.me.REG[3]);
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  } else {
    REGB1 = TAG_Bool(false);
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    /* ./analysis//inline_get_and_set.nit:56 */
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 56);
    }
    fra.me.REG[4] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
    /* ./analysis//inline_get_and_set.nit:57 */
    fra.me.REG[5] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[4])(fra.me.REG[4]);
    /* ./analysis//inline_get_and_set.nit:58 */
    REGB0 = TAG_Bool(fra.me.REG[5]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = TAG_Bool(fra.me.REG[5]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(false);
        REGB0 = REGB1;
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[5])(fra.me.REG[5], NIT_NULL);
        REGB0 = REGB1;
      }
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[4], COLOR_syntax___syntax_base___MMAttrImplementationMethod, ID_syntax___syntax_base___MMAttrImplementationMethod)) /*cast MMAttrImplementationMethod*/;
    } else {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    }
    if (UNTAG_Bool(REGB0)) {
      /* ./analysis//inline_get_and_set.nit:59 */
      REGB0 = TAG_Bool(ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____icb(fra.me.REG[2])!=NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
      } else {
        nit_abort("Uninitialized attribute %s", "_icb", LOCATE_analysis___inline_get_and_set, 59);
      }
      fra.me.REG[4] = ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____icb(fra.me.REG[2]);
      /* ./analysis//inline_get_and_set.nit:60 */
      fra.me.REG[6] = NEW_ISeq_icode___icode_base___ISeq___init();
      /* ./analysis//inline_get_and_set.nit:61 */
      fra.me.REG[7] = CALL_icode___icode_builder___ICodeBuilder___seq(fra.me.REG[4])(fra.me.REG[4]);
      /* ./analysis//inline_get_and_set.nit:62 */
      CALL_icode___icode_builder___ICodeBuilder___seq__eq(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[6]);
      /* ./analysis//inline_get_and_set.nit:63 */
      fra.me.REG[8] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
      REGB0 = TAG_Bool(fra.me.REG[8]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 63);
      }
      CALL_standard___collection___list___ListIterator___insert_before(fra.me.REG[8])(fra.me.REG[8], fra.me.REG[6]);
      /* ./analysis//inline_get_and_set.nit:64 */
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 64);
      }
      fra.me.REG[8] = CALL_icode___icode_base___ICodeN___exprs(fra.me.REG[3])(fra.me.REG[3]);
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 64);
      }
      fra.me.REG[9] = CALL_icode___icode_base___ICodeN___closure_defs(fra.me.REG[3])(fra.me.REG[3]);
      fra.me.REG[9] = CALL_icode___icode_tools___ICodeBuilder___inline_routine(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[5], fra.me.REG[8], fra.me.REG[9]);
      /* ./analysis//inline_get_and_set.nit:65 */
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 65);
      }
      fra.me.REG[3] = CALL_icode___icode_base___ICode___result(fra.me.REG[3])(fra.me.REG[3]);
      /* ./analysis//inline_get_and_set.nit:66 */
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
      } else {
        REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB1)) {
          REGB1 = TAG_Bool(false);
          REGB0 = REGB1;
        } else {
          REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[3])(fra.me.REG[3], NIT_NULL);
          REGB0 = REGB1;
        }
      }
      REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
      if (UNTAG_Bool(REGB0)) {
        /* ./analysis//inline_get_and_set.nit:67 */
        REGB0 = TAG_Bool(fra.me.REG[9]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
        } else {
          REGB1 = TAG_Bool(fra.me.REG[9]==NIT_NULL);
          if (UNTAG_Bool(REGB1)) {
            REGB1 = TAG_Bool(false);
            REGB0 = REGB1;
          } else {
            REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[9])(fra.me.REG[9], NIT_NULL);
            REGB0 = REGB1;
          }
        }
        REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
        if (UNTAG_Bool(REGB0)) {
        } else {
          nit_abort("Assert failed", NULL, LOCATE_analysis___inline_get_and_set, 67);
        }
        /* ./analysis//inline_get_and_set.nit:68 */
        fra.me.REG[8] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
        fra.me.REG[9] = NEW_IMove_icode___icode_base___IMove___init(fra.me.REG[3], fra.me.REG[9]);
        REGB0 = TAG_Bool(fra.me.REG[8]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 68);
        }
        CALL_standard___collection___list___ListIterator___insert_before(fra.me.REG[8])(fra.me.REG[8], fra.me.REG[9]);
      }
      /* ./analysis//inline_get_and_set.nit:70 */
      fra.me.REG[9] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
      REGB0 = TAG_Bool(fra.me.REG[9]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_get_and_set, 70);
      }
      CALL_standard___collection___list___ListIterator___delete(fra.me.REG[9])(fra.me.REG[9]);
      /* ./analysis//inline_get_and_set.nit:71 */
      CALL_icode___icode_builder___ICodeBuilder___seq__eq(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[7]);
      /* ./analysis//inline_get_and_set.nit:72 */
      REGB0 = ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____number_inlined(fra.me.REG[2]);
      REGB1 = TAG_Int(1);
      /* ./../lib/standard//kernel.nit:235 */
      REGB1 = TAG_Int(UNTAG_Int(REGB0)+UNTAG_Int(REGB1));
      /* ./analysis//inline_get_and_set.nit:72 */
      ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____number_inlined(fra.me.REG[2]) = REGB1;
      /* ./analysis//inline_get_and_set.nit:73 */
      CALL_icode___icode_tools___ICodeVisitor___visit_icode(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[6]);
    }
  }
  /* ./analysis//inline_get_and_set.nit:76 */
  CALL_SUPER_analysis___inline_get_and_set___InlineGetSetVisitor___visit_icode(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
void analysis___inline_get_and_set___InlineGetSetVisitor___init(val_t p0, val_t p1, val_t p2, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___inline_get_and_set___InlineGetSetVisitor].i;
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_get_and_set;
  fra.me.line = 79;
  fra.me.meth = LOCATE_analysis___inline_get_and_set___InlineGetSetVisitor___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* ./analysis//inline_get_and_set.nit:79 */
  fra.me.REG[3] = fra.me.REG[0];
  CALL_icode___icode_tools___ICodeVisitor___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  /* ./analysis//inline_get_and_set.nit:81 */
  fra.me.REG[2] = NEW_ICodeBuilder_icode___icode_builder___ICodeBuilder___init(fra.me.REG[1], fra.me.REG[2]);
  ATTR_analysis___inline_get_and_set___InlineGetSetVisitor____icb(fra.me.REG[3]) = fra.me.REG[2];
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
