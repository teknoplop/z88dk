		PUBLIC	_fsetattr

._fsetattr	pop de
		pop hl
		pop bc
		push bc
		push hl
		push de
		call 0xB8C9
		ld hl, 0
		ret c
		dec hl
		ret

