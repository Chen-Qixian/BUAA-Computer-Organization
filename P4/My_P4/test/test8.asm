ori $2,$0,0x8331
lui $3,0xacef
addu $4,$2,$3
ori $7,$0,4
sw $4,0($0)
lh $5,2($0)
lh $6,0($0)
lh $8,-2($7)