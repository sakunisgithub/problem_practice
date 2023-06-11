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

        int remainders[length];

        int even_count = 0;
        int odd_count = 0;

        for(int k = 0; k < length; k++)
        {
            remainders[k] = array[k] % 2;

            if (remainders[k] == 0)
            {
                even_count++;
            }
            else if (remainders[k] != 0)
            {
                odd_count++;
            }
        }

        int parity;

        if (even_count == 0 || odd_count == 0)
        {
            parity = 1;
        }
        else
        {
            parity = 0;
        }

        if (parity == 1)
        {
            cout << "Yes" <<"\n";
        }
        else if (parity == 0)
        {
           int minimum = array[0];

           for(int k = 1; k < length; k++)
           {
                if (array[k] < minimum)
                {
                    minimum = array[k];
                } 
           }

           if (minimum % 2 == 0)
           {
                cout << "No" <<"\n"; 
           }
           else if (minimum % 2 != 0)
           {
                cout << "Yes" <<"\n"; 
           }
        }
        
    }
    return 0;
}
