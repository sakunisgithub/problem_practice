testcases = int(input())

my_string = "codeforces"

for i in range(testcases) :
    letter = input()
    if letter in my_string :
        print("YES")
    else :
        print("NO")