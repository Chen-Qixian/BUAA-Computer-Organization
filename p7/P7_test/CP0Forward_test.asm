.text
# CP0 forward
ori $3 $0 0x007c
ori $1 $0 0x8666
mtc0 $1 $14
ori $2 $0 0x7c01
mtc0 $2 $12
sw $3 0($0)
lw $4 0($0)
mtc0 $4 $12
mfc0 $5 $12
sw $5 4($0)
mfc0 $6 $14
subu $6 $0 $6
mfc0 $7 $12
blez $7 if_1_else
nop
if_1:
j end
nop
if_1_else:
sll $8 $1 7
end:
sll $8 $1 3