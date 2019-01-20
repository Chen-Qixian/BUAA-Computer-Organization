.text
ori  $1,$0,0x7f00
ori  $2,$0,0x7f10
ori  $3,$0,0xff11
mtc0 $3,$12
ori  $4,$0,5
sw   $4,4($1)
ori  $5,$0,9
sw   $5,0($1)
div  $4,$5
mfhi $6