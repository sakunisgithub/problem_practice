#include<iostream>

void grading_students(int *, int);

using namespace std;

int main()
{
    int number_of_studens;
    cin >> number_of_studens;

    int grades[number_of_studens];

    for(int i = 0; i < number_of_studens; i++)
    {
        cin >> grades[i];
    }

    grading_students(grades, number_of_studens);

    for(int i = 0; i < number_of_studens; i++)
    {
        cout << grades[i] << "\n";
    }

    return 0;
}

void grading_students(int * array, int length)
{
    for(int i = 0; i < length; i++)
    {
        if (*(array + i) < 38)
        {
            continue;
        }
        else 
        {
            int next_multiple_of_five = ( ( (*(array + i)/5) + 1) * 5);
            int diff = next_multiple_of_five - *(array + i);

            if ( diff < 3)
            {
                *(array + i) = next_multiple_of_five;
            }
        }
    }
}
