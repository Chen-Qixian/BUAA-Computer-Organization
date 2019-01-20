.data
	array1: .space 4000
	array2: .space 4000
	array3: .space 4000
	space: .asciiz " "
	enter: .asciiz "\n"
.text
	li $v0,5
	syscall
	move $t0,$v0   # $t0 = n
	
	li $v0,5
	syscall
	move $t1,$v0    # $t1 = m
	
	li $t7,0       # $t7 = num
	li $t2,1       # $t2 = i
	for_1_begin:
   	    sub $t3,$t2,$t0
	    bgtz $t3,for_1_end
	    
	    li $t4,1   # $t4 = j
	    for_2_begin:
	    	sub $t3,$t4,$t1
	    	bgtz $t3,for_2_end
	        	      
	    	li $v0,5
	    	syscall
	    	move $t3,$v0
	    	
	    	beq $t3,$zero,add_
	    	
	    	la $t5,array1
	    	li $t6,4
	    	mult $t6,$t7
	    	mflo $t6
	    	addu $t5,$t5,$t6
	    	
	    	sw $t2,0($t5)
	    	
	    	la $t5,array2
	    	addu $t5,$t5,$t6
	    	
	    	sw $t4,0($t5)
	    	
	    	la $t5,array3
	    	addu $t5,$t5,$t6
	    	
	    	sw $t3,0($t5)	    	
	    	
	    	addi $t7,$t7,1
	    		    	
	    	add_:
	            addi $t4,$t4,1
	    	    j for_2_begin
	    for_2_end:
	    
	    addi $t2,$t2,1
	    j for_1_begin	    
	for_1_end:
	
	subi $t7,$t7,1
	move $t0,$t7
	for_3_begin:
	    bltz $t0,for_3_end
	    
	    la $t3,array1
	    li $t4,4
	    mult $t4,$t0
	    mflo $t4
	    addu $t3,$t3,$t4
	    
	    lw $a0,0($t3)
	    li $v0,1
	    syscall
	    
	    la $a0,space
	    li $v0,4
	    syscall
	    
	    la $t3,array2
	    addu $t3,$t3,$t4
	    
	    lw $a0,0($t3)
	    li $v0,1
	    syscall
	    
	    la $a0,space
	    li $v0,4
	    syscall
	    
	    la $t3,array3
	    addu $t3,$t3,$t4
	    
	    lw $a0,0($t3)
	    li $v0,1
	    syscall
	    
	    la $a0,enter
	    li $v0,4
	    syscall
	       	
	    addi $t0,$t0,-1
	    j for_3_begin
	for_3_end:
	
	
	
	
	
