#include<iostream>

void bubble_sort(int *, int);

void swap(int *, int *);

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    int output[testcases];

    for(int i = 0; i < testcases; i++)
    {
        int number_of_towers;

        cin >> number_of_towers;

        int blocks_in_towers[number_of_towers];

        for(int j = 0; j < number_of_towers; j++)
        {
            cin >> blocks_in_towers[j];
        }

        bubble_sort(blocks_in_towers, number_of_towers);

        for(int k = 1; k < number_of_towers; k++)
        {
            if (blocks_in_towers[0] < blocks_in_towers[k])
            {
                blocks_in_towers[0] += ((blocks_in_towers[k] - blocks_in_towers[0] + 1)/2);
            }
        }

        output[i] = blocks_in_towers[0];

    }

    for(int i = 0; i < testcases; i++)
    {
        cout << output[i] <<"\n";
    }

    return 0;
}

void bubble_sort(int * array, int length)
{
   for(int i = 0; i < length - 1; i++)
   {
       int sort_code = 0;
       for(int j = 1; j < length - 1 - i; j++)
       {
           if (*(array + j) > *(array + j + 1))
           {
                swap((array + j), (array + j + 1));
                sort_code = 1;
           }
       }
       if (sort_code == 0)
       {
            break;
       }
    
   } 
}

void swap(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
