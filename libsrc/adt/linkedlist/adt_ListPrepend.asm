; int adt_ListPrepend(struct adt_List *list, void *item)
; CALLER linkage for function pointers

PUBLIC adt_ListPrepend

EXTERN adt_ListPrepend_callee
EXTERN ASMDISP_ADT_LISTPREPEND_CALLEE

.adt_ListPrepend

   pop hl
   pop bc
   pop de
   push de
   push bc
   push hl
   
   jp adt_ListPrepend_callee + ASMDISP_ADT_LISTPREPEND_CALLEE
