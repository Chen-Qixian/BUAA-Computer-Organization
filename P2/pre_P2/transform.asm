.data
	a: .space 4000
	output: .asciiz "String is:"
.text
	li $v0,5
	syscall
	move $t0,$v0 # $t0 = n
	
	li $t1,0 # $t1 = i
	for_1_begin:
		beq $t1,$t0,for_1_end
		
		li $t2,4
		mult $t2,$t1
		mflo $t2
		la $t3,a
		addu $t2,$t2,$t3
		
		li $v0,12
		syscall
		sw $v0,0($t2)
		
		addi $t1,$t1,1
		j for_1_begin
	for_1_end:
	
	la $a0,output
	li $v0,4
	syscall
	
	li $t1,0
	li $t5,97
	for_2_begin:
		beq $t1,$t0,for_2_end
		
		li $t2,4
		mult $t2,$t1
		mflo $t2
		la $t3,a
		addu $t2,$t2,$t3
		
		lw $t4,0($t2)
		blt $t4,$t5,if_1_end
			addi $t4,$t4,-32	
		if_1_end:
			move $a0,$t4
			li $v0,11
			syscall		
		addi $t1,$t1,1
		j for_2_begin
	for_2_end: