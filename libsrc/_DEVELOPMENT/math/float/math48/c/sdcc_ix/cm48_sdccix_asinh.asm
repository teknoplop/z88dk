
; float asinh(float x)

SECTION code_clib
SECTION code_fp_math48

PUBLIC cm48_sdccix_asinh

EXTERN cm48_sdccix_asinh_fastcall

cm48_sdccix_asinh:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp cm48_sdccix_asinh_fastcall
