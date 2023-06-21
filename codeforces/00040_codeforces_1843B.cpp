#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int length;

        cin >> length;

        long long int array[length];

        long long int sum = 0;

        for (int j = 0; j < length; j++)
        {
            cin >> array[j];

            sum += abs(array[j]);
            
        }

        long long int blocks = 0;
        long long int block_open = 0;

        for (int k = 0; k < length; k++)
        {
            if (array[k] < 0 && block_open == 0)
            {
                block_open = 1;
                blocks++;
            }
            else if (array[k] > 0)
            {
                block_open = 0;   
            }
            
            
        }
        
        cout << sum <<" " << blocks << "\n"; 

    }
    
    return 0;
}