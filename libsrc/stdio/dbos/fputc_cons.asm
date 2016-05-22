	PUBLIC	fputc_cons

.fputc_cons
			    IN       A,($80)         ; wait for ACIA buffer to be ready
                BIT      1,A
                JR       Z,fputc_cons
				ld	hl,2
				add	hl,sp
				ld	a,(hl); Now A contains the char
                OUT      ($81),A    
                RET
