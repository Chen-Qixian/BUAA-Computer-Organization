.data
	a: .space 4000
	output: .asciiz "The prime numbers are:\n"
	space: .asciiz " "
	bar: .asciiz "\n"	
.text
	la $t0,a
	li $t1,2
	sw $t1,0($t0)
	li $t0,1    # $t0 = k
	li $t1,3    # $t1 = i
	for_1_begin:
		li $t2,1000
		bgt $t1,$t2,for_1_end
		
		li $t2,1   # $ t2 = p
		li $t3,2 # $t3 = j
		for_2_begin:			
			mult $t3,$t3
			mflo $t4
			bgt $t4,$t1,for_2_end
			
			divu $t1,$t3
			mfhi $t4
			bne $t4,$zero,if_1_end
			
				move $t2,$zero
				j for_2_end
			
			if_1_end:
			
			addi $t3,$t3,1
			j for_2_begin
		for_2_end:
		
		beq $t2,$zero,if_2_end	
			li $t4,4
			mult $t4,$t0
			mflo $t4
			la $t5,a
			addu $t4,$t4,$t5
			
			sw $t1,0($t4)
			
			addi $t0,$t0,1
		if_2_end:
		
		addi $t1,$t1,2
		j for_1_begin
	for_1_end:
	
	li $v0,5
	syscall
	move $t0,$v0  # $t0 = d
	li $v0,5
	syscall
	move $t1,$v0  # $t1 = b
	
	 move $t2,$zero # $t2 = i
	 li $t5,1 # $t5 = cnt
	 li $t6,10
	 
	 la $a0,output
	 li $v0,4
	 syscall
	 
	 for_3_begin:
	 	li $t3,1000
	 	bgt $t2,$t3,for_3_end
	 	
	 	la $t3,a
	 	li $t4,4
	 	mult $t4,$t2
	 	mflo $t4
	 	addu $t3,$t3,$t4
	 	
	 	lw $t4,0($t3)
	 	bgt $t4,$t1,for_3_end
	 	blt $t4,$t0,if_3_end
	 		move $a0,$t4
	 		li $v0,1
	 		syscall
	 		la $a0,space
	 		li $v0,4
	 		syscall	
	 	beq $t5,$t6,if_4_end
	 		addi $t5,$t5,1	 
	 		addi $t2,$t2,1
	 		j for_3_begin			
	 	
	 	if_4_end:
	 		li $t5,1
	 		la $a0,bar
	 		li $v0,4
	 		syscall
	 	if_3_end:	 	
	 	addi $t2,$t2,1
	 	j for_3_begin
	 for_3_end:
	 
	 li $v0,10
	 syscall  
	
	
