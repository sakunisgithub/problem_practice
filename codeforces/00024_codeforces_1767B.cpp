#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    int output[testcases];

    for(int i = 0; i < testcases; i++)
    {
        int number_of_towers;

        cin >> number_of_towers;

        int blocks_in_towers[number_of_towers];

        for(int j = 0; j < number_of_towers; j++)
        {
            cin >> blocks_in_towers[j];
        }

        for(int k = 1; k < number_of_towers; k++)
        {
            if (blocks_in_towers[0] < blocks_in_towers[k])
            {
                blocks_in_towers[0] += ((blocks_in_towers[k] - blocks_in_towers[0] + 1)/2);
            }
        }

        output[i] = blocks_in_towers[0];

    }

    for(int i = 0; i < testcases; i++)
    {
        cout << output[i] <<"\n";
    }

    return 0;
}
