#include<iostream>

int divisible_sum_pairs(int *, int, int);

using namespace std;

int main()
{
    int length, k;

    cin >> length;
    cin >> k;

    int numbers[length];

    for(int i = 0; i < length; i++)
    {
        cin >> numbers[i]; 
    }

    int output = divisible_sum_pairs(numbers, length, k);

    cout << output;

    return 0;
}

int divisible_sum_pairs(int * numbers, int length, int k)
{
    int count = 0;

    for(int i = 0; i < length - 1; i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if ( ( *(numbers + i) + *(numbers + j) ) % k == 0)
            {
                count++;
            }
        }
    }

    return  count;
}
