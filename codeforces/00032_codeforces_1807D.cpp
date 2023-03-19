// Time limit exceeded
#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int array_length, number_of_queries;

        cin >> array_length;
        cin >> number_of_queries;

        int array[array_length];

        int sum_of_array = 0;

        for (int j = 0; j < array_length; j++)
        {
            cin >> array[j];

            sum_of_array += array[j];
        }

        int l, r, k;

        for (int a = 0; a < number_of_queries; a++)
        {
            cin >> l;
            cin >> r;
            cin >> k;

            int new_sum_of_array = 0;

            l--;
            r--;

            int y = r - l + 1;

            int c = y * k;

            int deleteable = 0;

            for (int t = l; t <= r; t++)
            {
                deleteable += array[t];
            }
            
            new_sum_of_array = sum_of_array - deleteable + c;

            if (new_sum_of_array % 2 != 0)
            {
                cout << "YES" <<"\n";
            }
            else 
            {
                cout << "NO" <<"\n";
            }
        }
    }
    
    return 0;
}