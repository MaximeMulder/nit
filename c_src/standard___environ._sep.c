/* This C file is generated by NIT to compile module standard___environ. */
#include "standard___environ._sep.h"
val_t standard___environ___Symbol___environ(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  static val_t once_value_1; /* Once value */
    static val_t once_value_2; /* Once value */
    static val_t once_value_4; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___environ;
  fra.me.line = 20;
  fra.me.meth = LOCATE_standard___environ___Symbol___environ;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./../lib/standard//environ.nit:24 */
  fra.me.REG[0] = CALL_standard___string___Object___to_s(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[0] = CALL_standard___string___String___to_cstring(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[0] = CALL_standard___environ___NativeString___get_environ(fra.me.REG[0])(fra.me.REG[0]);
  /* ./../lib/standard//environ.nit:26 */
  if (!once_value_1) {
    if (!once_value_2) {
      fra.me.REG[1] = BOX_NativeString("");
      REGB0 = TAG_Int(0);
      fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
      once_value_2 = fra.me.REG[1];
      register_static_object(&once_value_2);
    } else fra.me.REG[1] = once_value_2;
    fra.me.REG[1] = fra.me.REG[1];
    fra.me.REG[1] = CALL_standard___string___String___to_cstring(fra.me.REG[1])(fra.me.REG[1]);
    fra.me.REG[1] = CALL_standard___environ___NativeString___get_environ(fra.me.REG[1])(fra.me.REG[1]);
    once_value_1 = fra.me.REG[1];
    register_static_object(&once_value_1);
  } else fra.me.REG[1] = once_value_1;
  fra.me.REG[1] = fra.me.REG[1];
  /* ./../lib/standard//environ.nit:27 */
  REGB0 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[0],fra.me.REG[1]));
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
    REGB0 = REGB1;
  }
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
    /* ./../lib/standard//environ.nit:28 */
    fra.me.REG[0] = NEW_String_standard___string___String___from_cstring(fra.me.REG[0]);
    goto label3;
  } else {
    /* ./../lib/standard//environ.nit:30 */
    if (!once_value_4) {
      fra.me.REG[1] = BOX_NativeString("");
      REGB0 = TAG_Int(0);
      fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
      once_value_4 = fra.me.REG[1];
      register_static_object(&once_value_4);
    } else fra.me.REG[1] = once_value_4;
    fra.me.REG[1] = fra.me.REG[1];
    fra.me.REG[0] = fra.me.REG[1];
    goto label3;
  }
  label3: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
val_t standard___environ___NativeString___get_environ(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___environ;
  fra.me.line = 36;
  fra.me.meth = LOCATE_standard___environ___NativeString___get_environ;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./../lib/standard//environ.nit:36 */
  fra.me.REG[0] = NativeString_get_environ___out(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
