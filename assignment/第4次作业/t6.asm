.data
	array: .space 4000
.text
main:
	li $v0,5           # read $a0 = N
	syscall
	move $a0,$v0
	la $a1,array       # get address 
	
	jal FIB
	
	li $v0,10          # end programme
	syscall

FIB:
	move $t0,$a0          # $t0 = N
	move $t1,$a1          # $t1 = array[0]
	li $t2,2             # $t2 = i
	li $t3,4
	li $t4,1             # $t4 = current numS
	sw $t4,0($t1)
	addu $t1,$t1,$t3
	sw $t4,0($t1)
	for_1_begin:
		beq $t2,$t0,for_1_end
		
		addu $t1,$t1,$t3
		lw $t5,-8($t1)
		lw $t6,-4($t1)
		add $t4,$t5,$t6
		sw $t4,0($t1)
		
		addi $t2,$t2,1
		j for_1_begin
	for_1_end:
	jr $ra
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	