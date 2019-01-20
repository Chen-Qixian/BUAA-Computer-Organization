ori $2,$0,0x2000
ori $18,$0,0x19ce
lui $19,2
ori $20,$19,0x1aaf
jal target1
sw $21,0($2)
sw $22,4($2)
sw $23,8($2)
lw $24,12($2)
lw $25,16($2)
j target2
target1:
and $21,$19,$20
addi $22,$21,0x2333
sll $23,$22,2
sw $18,12($2)
sw $20,16($2)
jr $ra
target2:
lui $26,0xffff
ori $27,$26,0xffff
ori $28,$0,1
ori $29,$0,2
bltz $27,else
sw $28,20($2)
j end
else:
sw $29,24($2)
end:
