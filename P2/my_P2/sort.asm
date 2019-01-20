.data
	a: .space 4000
	space: .asciiz " "
.text
	li $v0,5
	syscall
	move $t0,$v0   # $t0 = n
	li $t1,0       # $t1 = i 
	for_1_begin:
		beq $t1,$t0,for_1_end
		
		sll $t2,$t1,2
		li $v0,5
		syscall
		sw $v0,a($t2)
		
		addi $t1,$t1,1
		j for_1_begin
	for_1_end:
	
	li $t1,0   # $t1 = i
	for_2_begin:
		addu $t2,$t1,1   # $t2 = j
		beq $t1,$t0,for_2_end
		
		for_3_begin:
			beq $t2,$t0,for_3_end
			
			sll $t3,$t2,2
			lw $t4,a($t3)   # $t4 = a[j]
			sll $t3,$t1,2
			lw $t5,($t3)    # $t5 = a[i]
			bgt $t4,$t5,if_1_else
				sll $t3,$t2,2
				sw $t5,a($t3)
				sll $t3,$t1,2
				sw $t4,a($t3)
			if_1_else:
			
			addi $t2,$t2,1
			j for_3_begin
		for_3_end:
		
		addi $t1,$t1,1
		j for_2_begin
	for_2_end:
	
	li $t1,0
	for_4_begin:
		beq $t1,$t0,for_4_end
		
		sll $t2,$t1,2
		lw $a0,a($t2)
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		
		addi $t1,$t1,1
		j for_4_begin
	for_4_end:
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		