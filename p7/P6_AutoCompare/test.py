# 请将.txt文件与本程序置于相同目录下，并将魔改Mars输出结果存入"mars.txt"，
# CPU输出结果存入"cpu.txt".//ps:注意都为小写
file1 = open("mars.txt")
file2 = open("cpu.txt")
lines1 = file1.readlines(100000)
lines2 = file2.readlines(100000)
judge = 1
for i in range(len(lines1)):
        lines1[i] = lines1[i].strip('\n')
        if (i>=len(lines2)):
                if(len(lines1[i])>0):
                        judge = 0
                        print("Wrong Answer")
                        print("We got nothing when we expected %s"%(lines1[i]))
                        break
                else :
                        break
        lines2[i] = lines2[i].strip('\n')
        if (lines1[i]) not in (lines2[i]) :
                judge = 0
                print("Wrong Answer!")
                print("correct is: %s,wrong is:%s"%(lines1[i],lines2[i]))
if (judge): print("Accepted!")
input()

        
