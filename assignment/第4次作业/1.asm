loop: 
	addu $a0,$0,$t0
	ori $v0,$0,4
	syscall
	addi $t0,$t0,-1
	bnez $t0,loop
	andi $s0,$s7,0xffc0
	or $a0,$t7,$s0
	sb $a0,4($s6)
	srl $s7,$s7,4