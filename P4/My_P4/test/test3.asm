ori $1,$0,10
ori $2,$0,4
ori $3,$0,0
nop
ori $4,$0,0
ori $5,$0,1
lui $6,0x29ea
for_1_begin:
	beq $4,$1,for_1_end
	
	subu $6,$6,$2
	nop
	sw $6,0($3)
	addu $3,$3,$2
	
	addu $4,$4,$5
	jal for_1_begin
for_1_end:
lw $7,8($0)
nop