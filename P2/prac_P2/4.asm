.data
	a:.space 4000
	space: .asciiz " "
	newline: .asciiz "\n"
.text
	li $t0,0 # $t0 = k
	li $t1,2
	sll $t2,$t0,2
	sw $t1,a($t2)
	addi $t0,$t0,1
	
	li $t1,3  # $t1 = i
	li $s0,1000
	li $s1,10
	for_1_begin:	
		bgt $t1,$s0,for_1_end		
		li $t3,1  # $t3 = p
		li $t2,2  # $t2 = j
		for_2_begin:
			mult $t2,$t2
			mflo $t4
			bgt $t4,$t1,for_2_end
			
			div $t1,$t2
			mfhi $t4
			bne $t4,$0,if_1_else			
				li $t3,0
				j for_2_end
			if_1_else:
			
			addi $t2,$t2,1
			j for_2_begin
		for_2_end:
		
		beq $t3,$0,if_2_else
			sll $t4,$t0,2
			sw $t1,a($t4)
			addi $t0,$t0,1
		if_2_else:
		
		addi $t1,$t1,2
		j for_1_begin
	for_1_end:
	
	li $v0,5
	syscall
	move $t0,$v0  # $t0 = m
	li $v0,5
	syscall
	move $t1,$v0  # $t1 = n
	
	li $t2,1  # $t2 = cnt
	li $t3,0  # $t3 = i 
	for_3_begin:
		beq $t3,$s0,for_3_end
		
		sll $t4,$t3,2
		lw $t5,a($t4)
		bgt $t5,$t1,for_3_end
		
		blt $t5,$t0,if_3_else
			move $a0,$t5
			li $v0,1
			syscall
			la $a0,space
			li $v0,4
			syscall
			
			bne $t2,$s1,if_4_else
				la $a0,newline
				li $v0,4
				syscall
				li $t2,1
				j if_3_else
			if_4_else:
				addi $t2,$t2,1
		if_3_else:
		
		addi $t3,$t3,1
		j for_3_begin
	for_3_end:
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
