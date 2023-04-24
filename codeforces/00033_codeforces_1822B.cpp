#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int n;

        cin >> n;

        long long int array[n];

        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        
        long long int answer;

        if (n == 2)
        {
            answer = array[0] * array[1];
        }
        else
        {
            sort(array, array + n);

            long long int answer_1 = array[n-2] * array[n-1]; 
            long long int answer_2 = array[0] * array[1];
 
            if (answer_1 >= answer_2)
            {
                answer = answer_1;
            }
            else
            {
                answer = answer_2;
            }
        }
        
        cout << answer <<"\n";
    }
    
    return 0;
}