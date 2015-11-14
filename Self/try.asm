try 	START	0
first	LDCH S0,X
	STCH S1,X
	TIX S3
	JLT first

S0	BYTE C'test string'
S1	RESB 11
S3	WORD 11
	END first

