ori $1,$0,0x3014
sw $1,0($0)
jal loop1
lw $31,0($0)
ori $1,$0,1
ori $2,$0,2
j exit1
ori $3,$0,3
loop1:
jr $31
ori $4,$0,4
exit1:
ori $5,$0,0x303c
sw $5,4($0)
jal loop2
lw $31,4($0)
ori $5,$0,5
ori $6,$0,6
j exit2
ori $7,$0,7
loop2:
ori $8,$0,8
jr $31
ori $9,$0,9
exit2:
ori $10,$0,0x3068
sw $10,8($0)
jal loop3
lw $31,8($0)
ori $10,$0,10
ori $11,$0,11
j exit3
ori $12,$0,12
loop3:
ori $13,$0,13
ori $14,$0,14
jr $31
ori $15,$0,15
exit3:
