; CALLER LINKAGE FOR FUNCTION POINTERS

PUBLIC vz_soundcopy
EXTERN vz_soundcopy_callee
EXTERN ASMDISP_VZ_SOUNDCOPY_CALLEE

.vz_soundcopy

   pop af
   pop bc
   pop de
   ld b,e
   
   exx
   
   pop bc
   pop hl
   pop de
   
   push de
   push hl
   push bc
   
   exx
   
   push de
   push bc
   push af
   
   jp vz_soundcopy_callee + ASMDISP_VZ_SOUNDCOPY_CALLEE

