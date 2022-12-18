#include <stdio.h>
#include <string.h>

int main()
{
    int number_of_phone_numbers;

    scanf("%d", &number_of_phone_numbers);

    char phone_numbers[number_of_phone_numbers][21];

    for(int i = 0; i < number_of_phone_numbers; i++)
    {
        scanf("%s", phone_numbers[i]);
    }

    int length = strlen(phone_numbers[0]);

    int code_length = 0;

    int break_code = 1;

    for(int i = 0; i < length; i++)
    {
        int j;
        for(j = 0; j < number_of_phone_numbers - 1; j++)
        {
            if (phone_numbers[j][i] != phone_numbers[j+1][i])
            {
                break_code = 0;
                break;
            }
        }

        if (j == number_of_phone_numbers - 1)
        {
            code_length++;
        }

        if (break_code == 0)
        {
            break;
        }
    }

    printf("%d", code_length);

    return 0;
}