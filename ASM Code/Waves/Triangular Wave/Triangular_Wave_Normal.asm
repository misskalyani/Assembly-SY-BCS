ORG 00H
MOV A,#00H
L1:INC A
MOV P2,A
CJNE A,#0FFH,L1
L2:DEC A
MOV P2,A
CJNE A,#00H,L2
SJMP L1