testcases = int(input())

for i in range(testcases) :

    length_of_final_string = int(input())

    final_string = input()

    number_of_times_to_possibly_strip_off = 0
    for j in range(int(length_of_final_string/2)) :

        if final_string[j] == final_string[-(j+1)] :
            break
        else :
            number_of_times_to_possibly_strip_off += 1            
    
    print(length_of_final_string - (2*number_of_times_to_possibly_strip_off))