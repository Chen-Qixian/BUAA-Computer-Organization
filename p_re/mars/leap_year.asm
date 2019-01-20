.data
	yes: .asciiz "1"
	no: .asciiz "0"
	
.text
	li $v0,5
	syscall
	move $t0,$v0 #t0=n
	
	li $t1,4	
	divu $t0,$t1
	mfhi $t1
	bne $t1,$zero,if_1_else
	
	li $t1,100
	divu $t0,$t1
	mfhi $t1
	bne $t1,$zero,if_2_else
	
	li $t1,400
	divu $t0,$t1
	mfhi $t1
	bne $t1,$zero,if_3_else
	
	la $a0,yes
	li $v0,4
	syscall
	j if_end
	
	if_3_else:
	la $a0,no
	li $v0,4
	syscall
	j if_end
	
	if_2_else:
	la $a0,yes
	li $v0,4
	syscall
	j if_end
	
	
	if_1_else:
	la $a0,no
	li $v0,4
	syscall
	j if_end
	
	if_end:
	
	

