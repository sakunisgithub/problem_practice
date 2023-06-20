#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int length;

        cin >> length;

        int array[length];

        for (int j = 0; j < length; j++)
        {
            cin >> array[j];
        }
        
        sort(array, array + length);

        int cost = 0;

        for (int j = 0; j < length / 2; j++)
        {
            cost += array[length - j - 1] - array[j];
        }
        
        cout << cost <<"\n";
    }
    
    return 0;
}