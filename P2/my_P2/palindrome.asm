.data
	s: .space 4000
.text
	li $v0,5
	syscall
	move $t0,$v0   # $t0 = n
	li $t1,1       # $t1 = p
	li $t2,0       # $t2 = i
	for_1_begin:
		beq $t2,$t0,for_1_end
		
		li $v0,12
		syscall
		sll $t3,$t2,2
		sw $v0,s($t3)
		
		addi $t2,$t2,1
		j for_1_begin
	for_1_end:
	
	div $t2,$t0,2
	li $t3,0      # $t3 = i
	for_2_begin:
		slt $t4,$t3,$t2
		beq $t4,$zero,for_2_end
		
		sll $t4,$t3,2
		lw $t5,s($t4)       # $t5 = s[i]
		sub $t4,$t0,$t3
		subi $t4,$t4,1
		sll $t4,$t4,2
		lw $t6,s($t4)        # $t6 = s[n-i-1]
		beq $t5,$t6,if_1_else
			li $t1,0
			j for_2_end
		if_1_else:
		
		addi $t3,$t3,1
		j for_2_begin
	for_2_end:
	
	move $a0,$t1
	li $v0,1
	syscall
	
	li $v0,10
	syscall
		
		
		
		
		
		
		
		
		
		
		
		
		
		