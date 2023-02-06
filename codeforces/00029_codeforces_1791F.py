# EXCEEDED TIME LIMIT 
testcases = int(input())

for i in range(testcases) :

    first_line = [int(b) for b in input().split()]

    length = first_line[0] 
    
    number_of_queries = first_line[1] 

    array = [int(x) for x in input().split()]

    for j in range(number_of_queries) :

        query = [int(a) for a in input().split()]

        if query[0] == 1 :
            for k in range(query[1], (query[2] + 1)) :
                sum = 0

                num = str(array[k-1])
                for t in range(len(num)) :
                    sum += int(num[t])

                array[k-1] = sum 
        elif query[0] == 2 :
            print(array[query[1] - 1])
