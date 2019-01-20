.text
# load_EXC
#beyond the boundary
ori $28 $0 0
ori $29 $0 0
ori $1 $0 0x3000
ori $2 $0 3
lw $4 0($1)
addu $5 $4 $2
ori $1 $0 0x7F0c
ori $2 $0 4
lw $4 0($1)
addu $5 $4 $2
ori $1 $0 0x7F00
ori $2 $0 5
lw $4 0($1)
addu $5 $4 $2