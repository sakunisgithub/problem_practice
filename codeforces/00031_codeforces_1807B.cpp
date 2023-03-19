#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int number_of_bags;

        cin >> number_of_bags;

        int candies[number_of_bags];

        for (int j = 0; j < number_of_bags; j++)
        {
            cin >> candies[j];
        }

        int sum_of_even_numbers = 0;
        int sum_of_odd_numbers = 0;

        for (int k = 0; k < number_of_bags; k++)
        {
            if (candies[k] % 2 == 0)
            {
                sum_of_even_numbers += candies[k];
            }
            else if (candies[k] % 2 != 0)
            {
                sum_of_odd_numbers += candies[k];
            }
        }
        
        if (sum_of_even_numbers > sum_of_odd_numbers)
        {
            cout << "YES" <<"\n";
        }
        else
        {
            cout << "NO" <<"\n";
        }
        
    }
    
    return 0;
}