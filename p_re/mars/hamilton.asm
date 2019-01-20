.data
	visit: .space 400
	g: .space 4000
	bar: .asciiz"\n"
	no: .asciiz "0"
	yes: .asciiz "1"
.text
	li $v0,5
	syscall
	move $t0,$v0   # $t0 = n
	li $v0,5
	syscall
	move $t1,$v0  # $t1 = m
	
	li $t2,1
	for_1_begin:
		bgt $t2,$t1,for_1_end
		
		li $v0,5
		syscall
		move $t3,$v0  # $t3 = a
		li $v0,5
		syscall
		move $t4,$v0  # $t4 = b
		
		mult $t3,$t0
		mflo $t5
		addu $t5,$t5,$t4
		li $t6,4
		mult $t5,$t6
		mflo $t5
		la $t6,g
		addu $t5,$t6,$t5
		
		li $t6,1
		sw $t6,0($t5)
		
		mult $t4,$t0
		mflo $t5
		addu $t5,$t5,$t3
		li $t6,4
		mult $t5,$t6
		mflo $t5
		la $t6,g
		addu $t5,$t6,$t5
		
		li $t6,1
		sw $t6,0($t5)
	
		addi $t2,$t2,1
		j for_1_begin
	for_1_end:

	li $t1,1 # $t1 = judge 
	li $t2,1 # $t2 = num
	
	la $t3,visit
	addi $t3,$t3,4
	li $t4,1
	sw $t4,0($t3)
	move $a0,$t4
	
	jal hamilton
	
	beq $t1,$zero,if_1_end
	
	la $a0,no
	li $v0,4
	syscall
	
	if_1_end:
	
	li $v0,10
	syscall
hamilton:
	move $t5,$a0  # $t5 = k
	li $t3,1  #  $t3 = i
	li $t4,1  #  $t4 = p
	for_2_begin:
		bgt $t3,$t0,for_2_end
		
		mult $t0,$t5
		mflo $t6
		addu $t6,$t6,$t3
		li $t7,4
		mult $t7,$t6
		mflo $t6
		la $t7,g
		addu $t6,$t6,$t7
		
		lw $t7,0($t6)
		beq $t7,$zero,if_2_end
		
			la $t6,visit
			li $t7,4
			mult $t7,$t3
			mflo $t7
			addu $t6,$t6,$t7	# $t6 = visit[i]	
			lw $t7,0($t6)
			
			bne $t7,$zero,if_3_end		
				beq $t1,$zero,if_4_end	
					li $t4,0
					li $t7,1
					sw $t7,0($t6)
					addi $t2,$t2,1
					
					sw $ra,0($sp)
					subi $sp,$sp,4
					sw $t6,0($sp)
					subi $sp,$sp,4
					sw $t5,0($sp)
					subi $sp,$sp,4
					sw $t4,0($sp)
					subi $sp,$sp,4
					sw $t3,0($sp)
					subi $sp,$sp,4
					
					move $a0,$t3
					jal hamilton
					
					addi $sp,$sp,4
					lw $t3,0($sp)
					addi $sp,$sp,4
					lw $t4,0($sp)
					addi $sp,$sp,4
					lw $t5,0($sp)
					addi $sp,$sp,4
					lw $t6,0($sp)
					addi $sp,$sp,4
					lw $ra,0($sp)
					
					sw $zero,0($t6)
					subi $t2,$t2,1 																												
				if_4_end:
			if_3_end:
		if_2_end:
		
		addi $t3,$t3,1
		j for_2_begin
	for_2_end:
	
	beq $t4,$zero,if_5_end
		bne $t0,$t2,if_6_end
			addu $t6,$t0,$t5
			li $t7,4
			mult $t6,$t7
			mflo $t6
			la $t7,g
			addu $t6,$t6,$t7
			lw $t7,0($t6)
			beq $t7,$zero,if_7_end
				la $a0,yes
				li $v0,4
				syscall
				li $t1,0
			if_7_end:		
		if_6_end:	
	if_5_end:
		jr $31		
	

	
