#include<stdio.h>

void plus_minus(int *, int);

int main()
{
    int array_size;
    scanf("%d", &array_size);

    int array[array_size];
    for(int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    plus_minus(array, array_size);

    return 0;
}

void plus_minus(int * array, int length)
{
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i = 0; i < length; i++)
    {
        if (*(array + i ) > 0)
        {
            positive++;
        }
        else if (*(array + i) < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    
    printf("%.6f\n", (float)positive/(float)length);
    printf("%.6f\n", (float)negative/(float)length);
    printf("%.6f\n", (float)zero/(float)length);

}
