// EXCEEDED TIME LIMIT
#include<stdio.h>

int main()
{
    int testcases;
    scanf("%d", &testcases);

    for (int i = 0; i < testcases; i++)
    {
        int length, number_of_queries;
        scanf("%d", &length);
        scanf("%d", &number_of_queries);

        int array[length];

        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array[j]);
        }

        for (int k = 0; k < number_of_queries; k++)
        {
            int type_of_query, first_position, second_position;

            scanf("%d", &type_of_query);

            scanf("%d", &first_position);

            if (type_of_query == 1)
            {
                scanf("%d", &second_position);

                for (int t = (first_position-1); t <= (second_position-1); t++)
                {
                    int sum = 0;
                    int number = array[t];

                    while (number != 0)
                    {
                        sum += number % 10;
                        number = number / 10;
                    }

                    array[t] = sum;
                }
            }
            else if (type_of_query == 2)
            {
                printf("%d\n", array[first_position - 1]);
            }
        }
        
    }
    
    return 0;
}