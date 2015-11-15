try 	START	0
first	LDA S1
	ADD 5
	STA S1
	LDA S2
	ADD 4
	STA S2
	LDA S3
	ADD 1
	STA S3
	LDA S1
	COMP S2
	RD inpdev
	JGT print
	JLT adder
print	TD outdev
	JEQ print
	WD  outdev
adder	LDA S1
	ADD S3
	STA S1
outdev 	BYTE X'05'
inpdev	BYTE X'F1'	
S1	RESW 1
S2	RESW 1
S3	RESW 1
	END first 
