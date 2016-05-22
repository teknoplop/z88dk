;       Z88 Small C+ Run Time Library 
;
;       Get Long Pointer from Near Memory

                PUBLIC    l_getptr


;Fetch long from (hl)

.l_getptr

   ld e,(hl)
   inc hl
   ld d,(hl)
   inc hl
   ld l,(hl)
   ld h,0
   ex de,hl
   ret
