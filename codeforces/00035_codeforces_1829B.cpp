#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int length;

        cin >> length;

        int numbers[length];

        for (int j = 0; j < length; j++)
        {
            cin >> numbers[j];
        }

        
        int longest_blank_space = 0;

        int current_length = 0;

        for (int j = 0; j < length; j++)
        {
            if (numbers[j] == 0)
            {
                current_length++;

                if (current_length > longest_blank_space)
                {
                    longest_blank_space = current_length;
                }
                
            }
            else
            {
                if (current_length > longest_blank_space)
                {
                    longest_blank_space = current_length;
                }
                
                current_length = 0;
            }
            
        }
        

        cout << longest_blank_space <<"\n";
        
    }
    
    return 0;
}