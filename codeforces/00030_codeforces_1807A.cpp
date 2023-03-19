#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int a, b, c;

        cin >> a;
        cin >> b;
        cin >> c;

        int output;

        if (a + b == c)
        {
            output = 1;
        }
        else if (a - b == c)
        {
            output = 2;
        }

        if (output == 1)
        {
            cout << "+" <<"\n";
        }
        else if (output == 2)
        {
            cout << "-" <<"\n";
        }
        
    }
    
    return 0;
}