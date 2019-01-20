main:
	li $v0,5
	syscall
	move $a0,$v0
	li $v0,5
	syscall
	move $a1,$v0
	li $v0,5
	syscall
	move $a2,$v0             # input $a0,$a1,$a2
	
	jal sort
	
	li $v0,10
	syscall

sort:
	move $t0,$a0
	move $t1,$a1
	move $t2,$a2
	if_1_begin:
		bgt $t0,$t1,if_1_else        # if $a0 > $a1 
		j if_2_begin
	if_1_else:
		move $t4,$t0                 # swap $a0,$a1
		move $t0,$t1
		move $t1,$t4
	if_2_begin:
		bgt $t0,$t2,if_2_else        # if $a0 > $a2 
		j if_3_begin
	if_2_else:
		move $t4,$t0                 # swap $a0,$a1
		move $t0,$t2
		move $t2,$t4
	if_3_begin:
		bgt $t1,$t2,if_3_else         # if $a1 > $a2 
		j end
	if_3_else:
		move $t4,$t1                  # swap $a0,$a1
		move $t1,$t2
		move $t2,$t4
	end:
		move $a0,$t0
		move $a1,$t1
		move $a2,$t2      # save contents back to $a0~$a2
		jr $ra                         # return 
		
		
		
		
		
		
		
		
		