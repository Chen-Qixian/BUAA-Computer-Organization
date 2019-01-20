.data
	space: .asciiz "\n"      # to beautifully output add a space here
.text
main:
	li $v0,5
	syscall
	move $a0,$v0
	
	jal ABS
	move $a0,$v0
	li $v0,1
	syscall 
	
	la $a0,space             #completely unnecessarily
	li $v0,4                 #for beauty only
	syscall
	
	li $v0,5                 # call ABS a second time
	syscall
	move $a0,$v0
	
	jal ABS
	move $a0,$v0
	li $v0,1
	syscall 
	
	li $v0,10               #to end the programme successfully
	syscall

ABS:
	move $t0,$a0
	
	blt $t0,$zero,if_1_else   # if $t0 > 0
		move $v0,$t0      # then
		jr $ra
	if_1_else:                #else
		sub $v0,$zero,$t0
		jr $ra
