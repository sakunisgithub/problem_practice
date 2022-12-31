#include<iostream>

void kangaroo(int, int, int, int);

using namespace std;

int main()
{
    int x1, v1, x2, v2;

    cin >> x1;
    cin >> v1;
    cin >> x2;
    cin >> v2;

    kangaroo(x1, v1, x2, v2);

    return 0;
}

void kangaroo(int a1, int d1, int a2, int d2)
{
    float result = ( (float)(a2-a1)/(float)(d1-d2) ) + 1;

    if (result > 0 && (int)result == result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

// we are given the first terms and the common difference of two arithmetc progressions
// Observe that, for any natural number n, if the nth term of both the progressions are same, then our answer is YES else NO
// so we evaluate n as result, if result is positive and an integer, then we print YES, else NO
