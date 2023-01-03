#include<iostream>

int migratory_birds(int *, int);

using namespace std;

int main()
{
    int length;

    cin >> length;

    int array[length];

    for(int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    int output = migratory_birds(array, length);

    cout << output;

    return 0;
}

int migratory_birds(int * numbers, int length)
{
    int frequencies[5];
    // as it is guranteed that all possible types are 1, 2, 3, 4, 5

    for(int i = 0; i < 5; i++)
    {
        frequencies[i] = 0;
    }

    for(int i = 0; i < length; i++)
    {
        if (*(numbers + i) == 1)
        {
            frequencies[0]++;
        }
        else if (*(numbers + i) == 2)
        {
            frequencies[1]++;
        }
        else if (*(numbers + i) == 3)
        {
            frequencies[2]++;
        }
        else if (*(numbers + i) == 4)
        {
            frequencies[3]++;
        }
        else if (*(numbers + i) == 5)
        {
            frequencies[4]++;
        }
    }

    int max_frequency = frequencies[0];

    for(int i = 0; i < 5; i++)
    {
        if (*(frequencies + i) > max_frequency)
        {
            max_frequency = *(frequencies + i);
        }
    }

    int result;

    for(int i = 0; i < 5; i++)
    {
        if (*(frequencies + i) == max_frequency)
        {
            result = i + 1;
            break;
        }
    }

    return result;
}
