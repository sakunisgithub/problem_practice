#include<stdio.h>

int sockMerchant(int *, int);

int main()
{
    int array_size;

    scanf("%d", &array_size);

    int socks[array_size];

    for(int i = 0; i < array_size; i++)
    {
        scanf("%d", &socks[i]);
    }

    int output = sockMerchant(socks, array_size);

    printf("%d", output);

    return 0;
}

int sockMerchant(int * socks, int n)
{
    int number_of_pairs = 0;

    for(int i = 0; i < n; i++)
    {
        if (socks[i] != 0)
        {
            int temp = 0;
            temp++;

            for(int j = i+1; j < n; j++)
            {
                if (socks[j] == socks[i])
                {
                    temp++;
                    socks[j] = 0;
                }
            }

            if (temp % 2 == 0)
            {
                number_of_pairs += (temp / 2);
            }
            else if (temp >= 3 & temp % 2 != 0)
            {
                number_of_pairs += (temp / 2); 
            }
        }
    }

    return number_of_pairs;
}
