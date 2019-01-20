.data
	a: .space 4000
.text
	li $t0,0  # $t0 = cnt
	li $t1,0  # $t1 = i
	li $t3,16 # $t3 = n
	for_1_begin:
		beq $t1,$t3,for_1_end
		
		li $t2,0  # $t2 = j
		for_2_begin:
			beq $t2,$t3,for_2_end
			
			mult $t2,$t3
			mflo $t4
			add $t4,$t4,$t1
			sll $t4,$t4,2
			sw $t0,a($t4)
			addi $t0,$t0,1
			
			addi $t2,$t2,1
			j for_2_begin
		for_2_end:
		
		addi $t1,$t1,1
		j for_1_begin
	for_1_end:
	li $v0,10
	syscall