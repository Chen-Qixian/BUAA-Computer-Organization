.data
array_A:.space 196 #set array_A to save graph
array_B:.space 28 #set array_B to save point
stack: .space 300
.text
la $sp,stack
addi $sp,$sp,200
la $s2,array_A
la $s3,array_B
input:
li $v0,5 #input n
syscall
move $s0,$v0
li $v0,5 #input m
syscall
move $s1,$v0
#input graph
li $t0,0 #set $t0=0
for_input_begin:
bge $t0,$s1,for_input_end
li $v0,5
syscall
move $t1,$v0
addi $t1,$t1,-1
li $v0,5
syscall
move $t2,$v0
addi $t2,$t2,-1
#Calculated address
mul $t3,$s0,4 # address = address_array_A + t1*4*n+t2*4
mul $t4,$t2,4
mul $t5,$t1,$t3
add $t5,$t5,$t4
add $t4,$t5,$s2 #$t5 is Address offset 
li $t5,1
sw $t5,0($t4)
mul $t4,$t1,4
mul $t5,$t2,$t3
add $t5,$t5,$t4
add $t4,$t5,$s2 #$t5 is Address offset 
li $t5,1
sw $t5,0($t4)
addi $t0,$t0,1#i++
jal for_input_begin
for_input_end:
li $t0,0 #i=0
li $s4,0 #$s4(judge)=0
for_recursion_begin:
bge $t0,$s0,for_recuision_end
mul $t1,$t0,4
add $t2,$t1,$s3
sw $t2,0($sp)
subi $sp,$sp,4
sw $t0,0($sp)
subi $sp,$sp,4
li $t1,1
sw $t1,0($t2) #B[i]=1
move $a0,$t0
move $a1,$t0
jal hamiltonian_begin
addi $sp,$sp,4
lw $t0,0($sp)
addi $sp,$sp,4
lw $t2,0($sp)
li $t1,0 
sw $t1,0($t2) #B[i]=0
addi $t0,$t0,1 #i++
jal for_recursion_begin
for_recuision_end:
move $a0,$s4
li $v0,1
syscall
li $v0,10
syscall
hamiltonian_begin:
sw $ra,0($sp)
subi $sp,$sp,4
bnez $s4,if_2_end
mul $t0,$s0,4
mul $t1,$a1,4
mul $t0,$t0,$a0
add $t0,$t0,$t1 #t0 is adress offset
add $t0,$t0,$s2
lw $t0,0($t0)
	if_1_begin:#if A[a][b]==1
	bne $t0,1,if_2_begin
	li $s4,1#judge=1
	li $t0,0 # int i=0
		for_1_begin:
		bge $t0,$s0,if_2_begin
		mul $t1,$t0,4
		add $t1,$t1,$s3 
		lw $t1,0($t1) #t1=B[i]
			if_1_1_begin:
			bnez $t1,if_1_1_end
			li $s4,0
		if_1_1_end:
		addi $t0,$t0,1#i++
		jal for_1_begin
	if_2_begin: #if !judge
	bnez $s4,if_2_end
	li $t0,0
		for_2_begin:
		bge $t0,$s0,if_2_end
		mul $t1,$t0,4
		add $t1,$t1,$s3 #t1 is address of B[i]
		lw $t2,0($t1) #t2=B[i]
			if_2_1_begin:
			bnez $t2,if_2_1_end
			mul $t2,$t0,4
			mul $t3,$s0,4
			mul $t3,$a0,$t3
			add $t2,$t3,$t2 #t2 is address of A[a][i]
			add $t2,$t2,$s2
			lw $t2,0($t2)
			bne $t2,1,if_2_1_end
			li $t2,1
			sw $t2,0($t1)#B[i]=1
			sw $a0,0($sp)
			subi $sp,$sp,4
			sw $t1,0($sp)
			subi $sp,$sp,4
			sw $t0,0($sp)
			subi $sp,$sp,4
			move $a0,$t0
			jal hamiltonian_begin
			addi $sp,$sp,4
			lw $t0,0($sp)
			addi $sp,$sp,4
			lw $t1,0($sp)
			addi $sp,$sp,4
			lw $a0,0($sp)
			li $t2,0
			sw $t2,0($t1)#B[i]=0
		if_2_1_end:
		addi $t0,$t0,1#i++
		jal for_2_begin
if_2_end:
addi $sp,$sp,4
lw $ra,0($sp)
jr $ra

