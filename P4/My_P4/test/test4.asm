ori $1,$0,0x2100
nop
nop
ori $2,$0,0x8ace
jal work
nop
lui $5,0x1092
addu $7,$4,$5
sw $7,0($0)
ori $8,$0,1
ori $9,$0,2
nop
ori $10,$0,1
sw $8,4($0)
sw $9,8($0)
nop
sw $10,12($0)
jal work2
nop
beq $11,$12,end
sw $4,16($0)
beq $11,$13,end
sw $5,20($0)

work:
addu $3,$1,$2
subu $4,$3,$1
subu $4,$4,$1
jr $ra
work2:
lw $11,4($0)
lw $12,8($0)
nop
nop
nop
lw $13,12($0)
jr $ra
end:


