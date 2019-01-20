.text
ori $28, $0, 0x0000
ori $29, $0, 0x0000
lui $1,0x7fff
ori $1,$1,0xffff
addi $2,$1,2
xori $2,$1,0x8292
lui $1,0x7fff
ori $1,$1,0xfff3
ori $2,$0,0x0010
add $3,$1,$2
nor $3,$1,$2
lui $4,0x8000
ori $4,$4,0x0001
ori $5,$5,0xffff
sub $6,$4,$5
xor $6,$4,$5
lui $8, 0x7fff
lui $9, 0x7fff
add $10, $8, $9
or  $10, $8, $9






