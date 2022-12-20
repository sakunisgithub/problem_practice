#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int candles[n];

    for(int i = 0; i < n; i++)
    {
        cin >> candles[i];
    }

    int max = candles[0];

    for(int i = 1; i < n; i++)
    {
        if (candles[i] > max)
        {
            max = candles[i];
        }
    }

    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        if (candles[i] == max)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
