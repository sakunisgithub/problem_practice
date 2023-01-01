#include<iostream>

void breaking_records(int *, int);

using namespace std;

int main()
{
    int number_of_games;

    cin >> number_of_games;

    int scores[number_of_games];

    for(int i = 0; i < number_of_games; i++)
    {
        cin >> scores[i];
    }

    breaking_records(scores, number_of_games);

    return 0;
}

void breaking_records(int * scores, int length)
{
    int min = scores[0];
    int max = scores[0];

    int min_counter, max_counter;
    min_counter = max_counter = 0;

    for(int i = 0; i < length; i++)
    {
        if (scores[i] < min)
        {
            min = scores[i];
            min_counter++;
        }
        else if (scores[i] > max)
        {
            max = scores[i];
            max_counter++;
        }
    }

    cout << max_counter << " " << min_counter;
}
