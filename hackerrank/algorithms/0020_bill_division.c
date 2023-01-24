#include<stdio.h>

int bonAppetit(int *, int, int, int);

int main()
{
    int array_size, k;

    scanf("%d", &array_size);
    scanf("%d", &k);

    int bills[array_size];

    for(int i = 0; i < array_size; i++)
    {
        scanf("%d", &bills[i]);
    }

    int charged_bill;
    
    scanf("%d", &charged_bill);
    
    int output = bonAppetit(bills, array_size, k, charged_bill);

    if (output == 0)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d", output);
    }

    return 0;
}

int bonAppetit(int * bills, int array_size, int k, int charged_bill)
{
    int amount_to_be_shared = 0;

    for(int i = 0; i < array_size; i++)
    {
       if (i != k)
       {
        amount_to_be_shared += bills[i];
       } 
    }

    int share_of_anna = amount_to_be_shared/2;

    return (charged_bill - share_of_anna);
}
