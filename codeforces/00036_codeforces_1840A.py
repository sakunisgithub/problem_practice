testcases = int(input())

for i in range(testcases) :
    length = int(input())

    encrypted_string = input()

    decrypted_string = []

    real_letter = encrypted_string[0]

    match_code = 0

    for j in range(1, length) :
        if (match_code == 1) :
            match_code = 0
            continue

        if (encrypted_string[j] != real_letter) :
            match_code = 0

        if (encrypted_string[j] == real_letter) :
            decrypted_string.append(encrypted_string[j])
            
            if (j + 1 <= length - 1) :
                real_letter = encrypted_string[j + 1]

                match_code = 1
        
            
    decrypted_string_output = "".join(decrypted_string)

    print(decrypted_string_output)
