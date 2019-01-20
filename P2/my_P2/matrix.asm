.data
	A: .space 400
	B: .space 400
	s: .space 400
	space: .asciiz " "
	enter: .asciiz "\n"
.text
	li $v0,5
	syscall
	move $t0,$v0          # $t0 = n
	li $t1,0              # $t1 = i
	for_1_begin:
		li $t2,0      # $t2 = j
		beq $t1,$t0,for_1_end
		
		for_2_begin:
			beq $t2,$t0,for_2_end
			
			li $v0,5
			syscall
			mult $t0,$t1
			mflo $t3
			addu $t3,$t3,$t2
			sll $t3,$t3,2
			sw $v0,A($t3)
			
			addi $t2,$t2,1
			j for_2_begin
		for_2_end:
		
		addi $t1,$t1,1
		j for_1_begin
	for_1_end:
	li $t1,0              # $t1 = i
	for_3_begin:
		li $t2,0      # $t2 = j
		beq $t1,$t0,for_3_end
		
		for_4_begin:
			beq $t2,$t0,for_4_end
			
			li $v0,5
			syscall
			mult $t0,$t1
			mflo $t3
			addu $t3,$t3,$t2
			sll $t3,$t3,2
			sw $v0,B($t3)
			
			addi $t2,$t2,1
			j for_4_begin
		for_4_end:
		
		addi $t1,$t1,1
		j for_3_begin
	for_3_end:
	
	li $t1,0    # $t1 = i
	for_5_begin:
		li $t2,0 # $t2 = j
		beq $t1,$t0,for_5_end
		
		for_6_begin:
			li $t3,0  #$t3 = k
			beq $t2,$t0,for_6_end
			
			for_7_begin:
				beq $t3,$t0,for_7_end
				
				mult $t1,$t0
				mflo $t4
				addu $t4,$t4,$t3
				sll $t4,$t4,2
				lw $t5,A($t4)   # $t5 = a[i][k]
				
				mult $t3,$t0
				mflo $t4
				addu $t4,$t4,$t2
				sll $t4,$t4,2
				lw $t6,B($t4)   # $t6 = b[k][j]
				
				mult $t5,$t6
				mflo $t5
				mult $t1,$t0
				mflo $t4
				addu $t4,$t4,$t2
				sll $t4,$t4,2
				lw $t6,s($t4)
				
				add $t5,$t5,$t6
				sw $t5,s($t4)
				
				addi $t3,$t3,1
				j for_7_begin
			for_7_end:
			
			addi $t2,$t2,1
			j for_6_begin
		for_6_end:
		
		addi $t1,$t1,1
		j for_5_begin
	for_5_end:
	
	li $t1,0    # $t1 = i
	for_8_begin:
		li $t2,0 # $t2 = j
		beq $t1,$t0,for_8_end
		
		for_9_begin:
			beq $t2,$t0,for_9_end
			
			mult $t1,$t0
			mflo $t4
			addu $t4,$t4,$t2
			sll $t4,$t4,2
			lw $a0,s($t4)
			li $v0,1
			syscall
			
			la $a0,space
			li $v0,4
			syscall
			
			addi $t2,$t2,1
			j for_9_begin
		for_9_end:
		
		la $a0,enter
		li $v0,4
		syscall
		
		addi $t1,$t1,1
		j for_8_begin
	for_8_end:
	
	li $v0,10
	syscall
	
	
	
	
	
	
	
	
	
	
	
	
	
	