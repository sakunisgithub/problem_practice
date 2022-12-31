#include<iostream>

int get_total_x(int *, int, int *, int);

void bubble_sort(int*, int);

void swap(int*, int*);

using namespace std;

int main()
{
    int size_of_first_array, size_of_second_array;

    cin >> size_of_first_array;
    cin >> size_of_second_array;

    int first_array[size_of_first_array], second_array[size_of_second_array];

    for(int i = 0; i < size_of_first_array; i++)
    {
        cin >> first_array[i];
    }

    for(int i = 0; i < size_of_second_array; i++)
    {
        cin >> second_array[i];
    }

    int output = get_total_x(first_array, size_of_first_array, second_array, size_of_second_array);

    cout << output;

    return 0;
}

int get_total_x(int * first_array, int size_of_first_array, int * second_array, int size_of_second_array)
{
    bubble_sort(first_array, size_of_first_array);

    int start = *(first_array + size_of_first_array - 1);

    bubble_sort(second_array, size_of_second_array);

    int stop = *(second_array);

    int counter = 0;

    while(start <= stop)
    {
        int i, j;

        for(i = 0; i < size_of_first_array; i++)
        {
            if (start % first_array[i] != 0)
            {
                break;
            }
        }

        if (i == size_of_first_array)
        {
            for(j = 0; j < size_of_second_array; j++)
            {
                if (second_array[j] % start != 0)
                {
                    break;
                }
            }

            if (j == size_of_second_array)
            {
                counter++;
            }
        }

        start++;
    }


    return counter;

}

void bubble_sort(int* A, int a)
{
    for (int i = 0; i < a-1; i++)
    {
        int sort_code = 0;

        for (int j = 0; j < a-1-i; j++)
        {
            if ( *(A+j) > *(A+j+1) )
            {
                swap( (A+j), (A+j+1));
                sort_code = 1;
            }
        }
        if (sort_code == 0)
        {
            break;
        }
    }
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

