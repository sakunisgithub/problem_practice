#include<iostream>

void day_of_the_programmer(int);

int check_leapyear(int);

using namespace std;

int main()
{
    int year;

    cin >> year;

    day_of_the_programmer(year);

    return 0;
}

void day_of_the_programmer(int year)
{
    if (year <= 1917)
    {
        if (check_leapyear(year))
        {
            cout << "12.09." << year;
        }
        else
        {
            cout << "13.09." << year;
        }
    }
    else if (year == 1918)
    {
        cout << "26.09.1918";
    }
    else if (year >= 1919)
    {
        if (check_leapyear(year))
        {
            cout << "12.09." << year;
        }
        else
        {
            cout << "13.09." << year;
        }
    }
}

int check_leapyear(int year)
{
    if (year <= 1917)
    {
        if (year % 4 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }    
    else if (year >= 1919)
    {
        if (year % 4 != 0)
        {
            return 0;
        }
        else if (year % 100 != 0)
        {
            return 1;
        }
        else if (year % 400 != 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    return -1; // i.e. when year == 1918
}
