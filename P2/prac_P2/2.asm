.data
	a: .space 4000
	space: .asciiz " "
.text
	li $v0,5
	syscall
	move $t0,$v0  # $t0 = n
	li $t1,0  # $t1 = i
	for_1_begin:
		beq $t1,$t0,for_1_end
		
		li $v0,5
		syscall
		sll $t2,$t1,2
		sw $v0,a($t2)
		
		addi $t1,$t1,1
		j for_1_begin
	for_1_end:
	
	li $v0,5
	syscall
	move $t0,$v0  # $t0 = m
	li $t1,0  # $t1 = i
	li $t5,0  # $t5 = sum
	for_2_begin:
		beq $t1,$t0,for_2_end
		
		li $v0,5
		syscall
		move $t2,$v0  # $t2 = id
		
		sll $t3,$t2,2
		lw $t4,a($t3)
		add $t5,$t5,$t4
		
		addi $t1,$t1,1
		j for_2_begin
	for_2_end:
	
	move $a0,$t5
	li $v0,1
	syscall
	li $v0,10
	syscall
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		