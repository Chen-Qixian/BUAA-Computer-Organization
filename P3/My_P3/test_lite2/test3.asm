.data
a: .space 400
.text
ori $0,$0,1234
ori $1,$0,1
ori $2,$0,10
for_1_begin:
	slt $3,$1,$2
	beq $3,$0,for_1_end
	
	sll $4,$1,2
	sw $1,a($4)
	
	addi $1,$1,1
	j for_1_begin
for_1_end:
ori $5,$0,11
for_2_begin:
	sltiu $6,$5,20
	beq $6,$0,for_2_end
	
	sll $7,$5,2
	sw $5,a($7)
	
	addi $5,$5,1
	j for_2_begin
for_2_end: