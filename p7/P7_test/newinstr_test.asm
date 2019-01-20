.text
# new instr test
ori $1 $0 0x1234
mtc0 $1 $14
mfc0 $2 $14
ori $1 $0 0
mtc0 $1 $14
mfc0 $2 $14
ori $1 $0 0x7c01 #0111_1100_0000_0001
mtc0 $1 $12
mfc0 $2 $12
ori $1 $0 0
lui $3 0x8000
ori $1 $0 0x007c #0000_0000_0111_1100
addu $1 $1 $3
mtc0 $1 $13
mfc0 $2 $13
mtc0 $0 $13
ori $1 $0 0
ori $1 $0 0x3054
mtc0 $1 $14
eret
lui $4 0x1234
ori $3 $0 0x5678