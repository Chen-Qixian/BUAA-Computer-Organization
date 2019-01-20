.data
	a: .space 40
	flag: .space 40
	space: .asciiz " "
	enter: .asciiz "\n"
.text
	main:
		li $v0,5
		syscall
		move $s0,$v0    # $s0 = n
		
		li $a0,0
		jal perm
		
		li $v0,10
		syscall
	perm:
		move $t3,$a0       # $t3 = k
		bne $t3,$s0,if_1_else
			li $t0,0  # $t0 = i
			for_1_begin:
				beq $t0,$s0,for_1_end
				
				sll $t1,$t0,2
				lw $a0,a($t1)
				li $v0,1
				syscall
				
				la $a0,space
				li $v0,4
				syscall
				
				addi $t0,$t0,1
				j for_1_begin
			for_1_end:
			
			la $a0,enter
			li $v0,4
			syscall
			
			jr $ra
		if_1_else:
			li $t0,1  # $t0 = i
			for_2_begin:
				bgt $t0,$s0,for_2_end
				
				sll $t1,$t0,2
				lw $t2,flag($t1)
				
				bne $t2,$zero,if_2_else
					li $t2,1
					sw $t2,flag($t1)
					sll $t1,$t3,2
					sw $t0,a($t1)
					
					sw $ra,0($sp)
					sw $t0,-4($sp)
					sw $t3,-8($sp)
					subi $sp,$sp,12              # !mind here: 
					                             # recursion maintain stack
					addi $a0,$t3,1               # pointer must move 4 bytes over the last address
					jal perm                     # move pointer after oprating the memory
					
					addi $sp,$sp,12
					lw $t3,-8($sp)
					lw $t0,-4($sp)
					lw $ra,0($sp)
					
					sll $t1,$t0,2
					sw $zero,flag($t1)
				if_2_else:
				
				addi $t0,$t0,1
				j for_2_begin
			for_2_end:
			jr $ra
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			