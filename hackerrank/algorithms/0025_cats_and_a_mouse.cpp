#include <cmath>
#include<iostream>

int cat_and_mouse(int*);

using namespace std;

int main()
{
    int number_of_queries, positions[3];

    cin >> number_of_queries;

    int output[number_of_queries];

    for(int i = 0; i < number_of_queries; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> positions[j]; 
        }

        output[i] = cat_and_mouse(positions);
    }

    for(int i = 0; i < number_of_queries; i++)
    {
        if (output[i] == 0)
        {
            cout << "Cat A" <<"\n";
        }
        else if (output[i] == 1)
        {
            cout << "Cat B" <<"\n";
        }
        else if (output[i] == 2)
        {
            cout << "Mouse C" <<"\n";
        }
    }

    return 0;
}

int cat_and_mouse(int * positions)
{
    int answer;

    int distance_1 = *(positions + 2) - *(positions + 0);

    int distance_2 = *(positions + 2) - *(positions + 1);

    distance_1 = fabs(distance_1);

    distance_2 = fabs(distance_2);

    if (distance_1 < distance_2)
    {
        answer = 0;
    }
    else if (distance_1 > distance_2)
    {
        answer = 1;
    }
    else if (distance_1 == distance_2)
    {
        answer = 2;
    }

    return answer;
}
