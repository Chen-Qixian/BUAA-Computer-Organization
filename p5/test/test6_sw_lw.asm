ori $2,$0,4
ori $5,$0,16
sw $2,0($0)
lw $1,0($0)
sw $1,4($0)
lw $3,4($0)
sw $5,4($3)
lw $4,8($0)
sw $5,0($5)
sw $4,12($0)
lw $6,12($0)
ori $7,$0,24
sw $7,4($6)
lw $8,20($0) 
ori $9,$0,28
nop
sw $9,0($8)
lw $10,24($0)
nop
nop
sw $10,28($0)