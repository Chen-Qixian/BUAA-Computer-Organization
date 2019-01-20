ori $8,$8,100
addu $9,$9,$8
sw $8,0($s1)
lw $10,0($s1)
bgez $9,test
andi $11,$8,4
test:
ori $7,$7,22
jal test1
jal end
test1:
nop
lui $12,100
beq $8,$8,test2
addu $8,$8,$9
test2:
jalr $t1,$ra
end:
sw $8,4($s1)
lw $13,4($s1)
addu $8,$8,$9
jal test1
lui $14,100
ori $14,$14,34
lui $15,34
sw $15,8($2)
beq $14,$15,end1
nop
nop
end1:
ori $15,$15,32