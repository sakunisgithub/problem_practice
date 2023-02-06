testcases = int(input())

for i in range(testcases) :

    correct_digits = 0

    remembered_digits = input()

    appropriate_digits = "314159265358979323846264338327"

    for j in range(len(remembered_digits)) :
        if (remembered_digits[j] == appropriate_digits[j]) :
            correct_digits += 1
        else :
            break
    
    print(correct_digits)