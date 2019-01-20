.data
	example100: .space 440 
.text
	move $t0,$zero                               # $t0 = i
	for_1_begin:                                 # store 100 numbers to memory
		beq $t0,5,for_1_end
		
		li $v0,5
		syscall
		la $t1,example100                    # calculate the address
		li $t2,4
		mult $t2,$t0
		mflo $t2
		addu $t2,$t2,$t1
		sw $v0,0($t2)
		
		addi $t0,$t0,1
		j for_1_begin
	for_1_end:
	
	li $t0,0                                   # $t0 = i
	li $t5,0                                   # $t5 = sum
	for_2_begin:
		beq $t0,5,for_2_end
		
		li $t1,4                           # calculate address
		la $t2,example100
		mult $t1,$t0
		mflo $t1
		addu $t2,$t2,$t1
		lw $t3,0($t2)
		addu $t5,$t5,$t3                   # add
		
		addi $t0,$t0,1
		j for_2_begin
	for_2_end:
	
	addi $t2,$t2,4
	sw $t5,0($t2)                              # store num to memory next
	
	move $a0,$t5
	li $v0,1
	syscall
	
	
	
	
	
	
	
	
	
	