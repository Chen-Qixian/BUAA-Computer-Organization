.text
ori $1,$0,0x7f00
ori $2,$0,0x7f04
ori $5,$0,0x0009
ori $6,$0,0x0005
ori $7,$0,0xfff1
mtc0 $7,$12
sw $6,0($2)
sw $5,0($1)
ori $3,$0,0x7f10
ori $4,$0,0x7f14

