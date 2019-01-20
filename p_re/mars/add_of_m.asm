.data
	array: .space 4000
.text
	li $v0,5
	syscall
	move $t0,$v0  # $t0 = n
	li $t1,0   # $t1 = i
	for_1_begin:
		slt $t2,$t1,$t0
		beq $t2,$zero,for_1_end
		
		la $t3,array
		li $t2,4
		mult $t2,$t1
		mflo $t2
		addu $t3,$t3,$t2
		
		li $v0,5
		syscall
		sw $v0,0($t3)
		
		addi $t1,$t1,1
		j for_1_begin
	for_1_end:
	
	li $v0,5
	syscall
	move $t0,$v0   # $t0 = m
	li $t1,0       # $t1 = i
	li $t3,0       # $t3 = sum
	for_2_begin:
		slt $t2,$t1,$t0
		beq $t2,$zero,for_2_end
		
		li $v0,5
		syscall
		move $t2,$v0
		
		la $t4,array
		li $t5,4
		mult $t5,$t2
		mflo $t5
		addu $t4,$t4,$t5
		
		lw $t2,0($t4)
		add $t3,$t3,$t2
		
		addi $t1,$t1,1
		j for_2_begin
	for_2_end:
	
	la $a0,($t3)
	li $v0,1
	syscall
	li $v0,10
	syscall
	