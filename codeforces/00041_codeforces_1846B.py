testcases = int(input())

for i in range(testcases):
    row1 = input()
    row2 = input()
    row3 = input()

    if(row1[0] == row2[1] == row3[2] and row1[0] != "."):
        print(row1[0])
        continue
    elif(row1[2] == row2[1] == row3[0] and row1[2] != "."):
        print(row1[2])
        continue
    elif(row1[0] == row1[1] == row1[2] and row1[0] != "."):
        print(row1[0])
        continue
    elif(row2[0] == row2[1] == row2[2] and row2[0] != "."):
        print(row2[0])
        continue
    elif(row3[0] == row3[1] == row3[2] and row3[0] != "."):
        print(row3[0])
        continue
    if(row1[0] == row2[0] == row3[0] and row1[0] != "."):
        print(row1[0])
        continue
    elif(row1[1] == row2[1] == row3[1] and row1[1] != "."):
        print(row1[1])
        continue
    elif(row1[2] == row2[2] == row3[2] and row1[2] != "."):
        print(row1[2])
        continue
    else :
        print("DRAW")
