#include<iostream>

int birthday_func(int *, int, int, int);

using namespace std;

int main()
{
    int array_length;

    cin >> array_length;

    int chocolate_bar[array_length];

    for(int i = 0; i < array_length; i++)
    {
        cin >> chocolate_bar[i];
    }

    int birthday, month;

    cin >> birthday;
    cin >> month;

    int output = birthday_func(chocolate_bar, array_length, birthday, month);

    cout << output;

    return 0;
}

int birthday_func(int * chocolate_bar, int array_length, int birthday, int month)
{
    int counter = 0;

    for(int i = 0; i <= array_length - month; i++)
    {
        int sum = 0;

        for(int j = i; j < i + month; j++)
        {
            sum += *(chocolate_bar + j);
        }

        if (sum == birthday)
        {
            counter++;
        }
    }

    return counter;
}
