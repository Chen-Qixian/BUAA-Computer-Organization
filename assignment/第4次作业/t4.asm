.data
	src: .space 400
	dest: .space 400
.text
	li $t0,0                        # $t0 = i
	for_1_begin:
		beq $t0,100,for_1_end   # initialize memory of src
		
		li $v0,5
		syscall
		li $t1,4
		la $t2,src
		mult $t0,$t1
		mflo $t1
		addu $t2,$t2,$t1
		sw $v0,0($t2)
		
		addi $t0,$t0,1
		j for_1_begin
	for_1_end:
	
	li $t0,0
	for_2_begin:
		beq $t0,100,for_2_end
		
		li $t1,4                             #calculate address
		la $t2,src                           #transfer contents to new field of memory
		la $t3,dest
		mult $t0,$t1
		mflo $t1
		addu $t2,$t2,$t1
		addu $t3,$t3,$t1
		lw $t4,0($t2)
		sw $t4,0($t3)
		
		addi $t0,$t0,1
		j for_2_begin
	for_2_end:
	
	
	
	
	
	
	
	
	
	
	
	