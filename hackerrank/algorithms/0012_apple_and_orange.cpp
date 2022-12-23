#include<iostream>

void count_apples_and_oranges(int, int, int, int, int *, int, int *, int);

using namespace std;

int main()
{
    int s, t;

    cin >> s;
    cin >> t;

    int a, b;

    cin >> a;
    cin >> b;

    int number_of_apples, number_of_oranges;

    cin >> number_of_apples;
    cin >> number_of_oranges;

    int distances_of_apples[number_of_apples], distances_of_oranges[number_of_oranges];

    for(int i = 0; i < number_of_apples; i++)
    {
        cin >> distances_of_apples[i];
    }

    for(int i = 0; i < number_of_oranges; i++)
    {
        cin >> distances_of_oranges[i];
    }

    count_apples_and_oranges(s, t, a, b, distances_of_apples, number_of_apples, distances_of_oranges, number_of_oranges);

    return 0;
}

void count_apples_and_oranges(int lower, int upper, int apple_tree, int orange_tree, int * distances_of_apples, int number_of_apples, int * distances_of_oranges, int number_of_oranges)
{
    int sam_apple = 0;
    int sam_orange = 0;

    for(int i = 0; i < number_of_apples; i++)
    {
        int temp_1 = apple_tree + *(distances_of_apples + i);

        if (temp_1 >= lower && temp_1 <= upper)
        {
            sam_apple++;
        }
    }

    for(int i = 0; i < number_of_oranges; i++)
    {
        int temp_1 = orange_tree + *(distances_of_oranges + i);

        if (temp_1 >= lower && temp_1 <= upper)
        {
            sam_orange++;
        }
    }

    cout << sam_apple << endl;
    cout << sam_orange;
}
