.data
	yes: .asciiz "1"
	no: .asciiz "0"
.text
	li $v0,5
	syscall
	move $t0,$v0  # $t0 = n
	
	li $t1,4
	li $t2,100
	li $t3,400
	
	div $t0,$t1
	mfhi $t1
	bne $t1,$0,if_1_end
		div $t0,$t2
		mfhi $t2
		bne $t2,$0,if_2_end
			div $t0,$t3
			mfhi $t3
			bne $t3,$0,if_3_end
				la $a0,yes
				li $v0,4
				syscall
				
				j end
			if_3_end:
				la $a0,no
				li $v0,4
				syscall
				
				j end
		if_2_end:
			la $a0,yes
			li $v0,4
			syscall
			j end
	if_1_end:
		la $a0,no
		li $v0,4
		syscall
	end:
	li $v0,10
	syscall	
		