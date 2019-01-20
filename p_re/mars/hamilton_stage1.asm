.data
	visit: .space 400
	g: .space 4000
	bar: .asciiz"\n"
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
	
	li $t2,1
	for_2_begin:
		bgt $t2,$t0,for_2_end
		
		li $t3,1
               for_3_begin:
                	bgt $t3,$t0,for_3_end
              	
                	mult $t2,$t0
                	mflo $t4
                	addu $t4,$t3,$t4
	              	li $t5,4
                	mult $t5,$t4
                	mflo $t4
  	            	la $t5,g
                	addu $t5,$t5,$t4
                	
                	lw $a0,0($t5)
                	li $v0,1
                	syscall
                	
                	la $a0,bar
                	li $v0,4
                	syscall
               	
	              	addi $t3,$t3,1
                	j for_3_begin
		for_3_end:
		
		addi $t2,$t2,1
		j for_2_begin
	for_2_end:

	
