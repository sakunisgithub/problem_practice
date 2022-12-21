given_time = input()

hours = (int(given_time[0])*10) + int(given_time[1])

my_list = []

if given_time[8] == 'A' :
    if hours == 12 :
        my_list.append("00") 
    else :
        if len(str(hours)) == 1 :
            my_list.append("0")
            my_list.append(str(hours)) 
        else :
            my_list.append(str(hours)) 

else :
    if hours == 12 :
        my_list.append("12")
    else :
        my_list.append(str(hours+12))

my_list.append(given_time[2:8])

output = ''.join(my_list)

print(output)