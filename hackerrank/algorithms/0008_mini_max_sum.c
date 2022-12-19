#include<stdio.h>

void selection_sort(unsigned long long int *);

void swap(unsigned long long int *, unsigned long long int *);

void mini_max_sum(unsigned long long int *);

int main()
{
    unsigned long long int array[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%llu", &array[i]);
    }

    selection_sort(array);

    mini_max_sum(array);

    return 0;
}

void selection_sort(unsigned long long int * array)
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if (*(array + i) > *(array + j))
            {
                swap((array+i), (array+j));
            }
        }
    } 
}

void swap(unsigned long long int * a, unsigned long long int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

void mini_max_sum(unsigned long long int * array)
{
    printf("%llu ", ( *(array + 0) + *(array + 1) + *(array + 2) + *(array + 3) ));
    printf("%llu", ( *(array + 1) + *(array + 2) + *(array + 3) + *(array + 4) ));
}
