; CALLER linkage for function pointers

PUBLIC memopd
EXTERN memopd_callee
EXTERN ASMDISP_MEMOPD_CALLEE

.memopd

   pop af
   pop ix
   pop bc
   pop de
   pop hl
   push hl
   push de
   push bc
   push bc
   push af
   
   jp memopd_callee + ASMDISP_MEMOPD_CALLEE
