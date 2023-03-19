#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    while(testcases--)
    {
        int array_length, number_of_queries;

        cin >> array_length;
        cin >> number_of_queries;

        int array[array_length];

        int cumulative_sum[array_length];

        for (int j = 0; j < array_length; j++)
        {
            cin >> array[j];
        }

        cumulative_sum[0] = array[0];

        for (int j = 1; j < array_length; j++)
        {
            cumulative_sum[j] = cumulative_sum[j-1] + array[j];
        }
        
        int l, r, k;

        while(number_of_queries--)
        {
            cin >> l;
            cin >> r;
            cin >> k;

            int y = r - l + 1;

            int c = y * k;

            int first;

            if (l == 1)
            {
                first = 0;
            }
            else
            {
                first = cumulative_sum[l-2];
            }
            

            int last = cumulative_sum[array_length-1] - cumulative_sum[r-1];

            int new_sum_of_array = first + c + last;

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