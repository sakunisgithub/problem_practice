testcases = int(input())

for i in range(testcases) :

    abscissa = 0
    ordinate = 0

    length_of_string = int(input())

    directions = input()

    touch_code = 0

    for j in range(length_of_string) :
        if directions[j] == 'U' :
            abscissa += 1
        elif directions[j] == 'D' :
            abscissa -= 1
        elif directions[j] == 'L' :
            ordinate -= 1
        elif directions[j] == 'R' :
            ordinate += 1

        if (abscissa == 1 and ordinate == 1) :
            touch_code = 1
            break
    
    if (touch_code == 0) :
        print("NO")
    elif touch_code == 1 :
        print("YES")
