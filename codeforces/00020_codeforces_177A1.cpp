#include<iostream>

using namespace std;

int main()
{
    int order;
    cin >> order;   

    int matrix[order][order];
    for(int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < order; i++)
    {
        sum += matrix[i][i]; // the principle diagonal
    }
    for(int i = 0; i < order; i++)
    {
        sum += matrix[i][order-1-i]; // the secondary diagonal
    }
    for(int i = 0; i < order; i++)
    {
        sum += matrix[i][order/2]; // the middle column
    }
    for(int i = 0; i < order; i++)
    {
        sum += matrix[order/2][i]; // the middle row
    }

    sum -= 3*(matrix[order/2][order/2]); // as the middle most element is count four times, i.e. three extra times

    cout << sum ;

    return 0;
}

// https://codeforces.com/problemset/problem/177/A1
