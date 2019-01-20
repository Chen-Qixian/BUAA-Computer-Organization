.data
	data : .space 4000
.text
	li $t0,16  # $t0 = col
	li $t1,16  # $t1 = row
	move $s0,$zero  # $s0 = col
	move $s1,$zero  # $s1 = row
	move $s2,$zero
	loop :
		mult $s1,$t0
		mflo $t2
		addu $t2,$t2,$s0
		li $t3,4
		mult $t2,$t3
		mflo $t2
		la $t3,data
		addu $t2,$t2,$t3
		addi $t2,$t2,4096
		sw $s2,0($t2)
		addi $s2,$s2,1
		
		addi $s1,$s1,1
		bne $s1,$t1,loop
		
		move $s1,$zero
		addi $s0,$s0,1
		
		bne $s0,$t0,loop
		
		li $v0,10
		syscall
	
		
	