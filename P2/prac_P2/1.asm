.data
	a:.space 4000
	B:.space 4000
	c:.space 4000
	space: .asciiz " "
	newline :.asciiz "\n"
.text
	li $v0,5
	syscall
	move $t0,$v0 # $t0 = n
	li $v0,5
	syscall
	move $t1,$v0 # $t1 = m
	li $t2,0  # $t2 = k
	li $t3,1  # $t3 = i
	for_1_begin:
		bgt $t3,$t0,for_1_end
		
		li $t4,1  # $t4 = j
		for_2_begin:
			bgt $t4,$t1,for_2_end
			
			li $v0,5
			syscall
			move $t5,$v0  # $t5 = x
			
			beq $t5,$0,if_1_else
				sll $t6,$t2,2
				sw $t3,a($t6)
				sw $t4,B($t6)
				sw $t5,c($t6)
				addi $t2,$t2,1
			if_1_else:
			
			addi $t4,$t4,1
			j for_2_begin
		for_2_end:
		
		addi $t3,$t3,1
		j for_1_begin
	for_1_end:
	
	subi $t2,$t2,1
	for_3_begin:
		bltz $t2,for_3_end
		
		sll $t3,$t2,2
		lw $a0,a($t3)
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		lw $a0,B($t3)
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		lw $a0,c($t3)
		li $v0,1
		syscall
		la $a0,newline
		li $v0,4
		syscall
		
		subi $t2,$t2,1
		j for_3_begin
	for_3_end:
	
	li $v0,10
	syscall
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	