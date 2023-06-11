// if there is any negative number in the array, surely that must be one of the intitial numbers
// if all the numbers in the array are non-negative, then the maximum among them must be one of the initial numbers, because modulus of any two non-negative numbers is always less the maximum of the two numbers 

#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    {
        int length;

        cin >> length;

        int array[length];

        for(int k = 0; k < length; k++)
        {
            cin >> array[k];
        }

        int negative_index;

        int negative_code = 0;

        for(int k = 0; k < length; k++)
        {
            if (array[k] < 0)
            {
                negative_index = k;
                negative_code = 1;
                break;
            }
        }

        if (negative_code == 1)
        {
            cout << array[negative_index] <<"\n";
        }
        else
        {
            int maximum = array[0];

            for(int k = 1; k < length; k++)
            {
                if (array[k] > maximum)
                {
                    maximum = array[k];
                }
            }

            cout << maximum <<"\n";
        }
        
    }
    return 0;
}
