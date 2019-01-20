nop
ori $0,$0,1010
ori $1,$0,0x3ecf
ori $2,$0,0x8ace
nop
lui $3,0x1011
addu $4,$3,$2
addu $4,$4,$1
nop
addu $1,$1,$1
nop
subu $5,$4,$2
subu $5,$5,$1
jal work
ori $6,$0,1
ori $7,$0,1
nop
beq $6,$7,end
work:
sw $1,0($0)
sw $2,4($0)
nop
sw $3,8($0)
nop
sw $4,12($0)
lw $5,4($0)
sw $5,16($0)
end:
