#include<iostream>

int counting_valleys(char *, int);

using namespace std;

int main()
{
    int number_of_steps;

    cin >> number_of_steps;

    char steps[number_of_steps];

    cin >> steps;

    int output = counting_valleys(steps, number_of_steps);

    cout << output;

    return 0;
}

int counting_valleys(char * steps, int number_of_steps)
{
   int sea_level = 0;

   int valley = 0;

   for(int i = 0; i < number_of_steps; i++)
   {
       if (*(steps+i) == 'U')
       {
            sea_level++;

           if (sea_level == 0)
           {
                valley++;            
           }
       }
       else if (*(steps+i) == 'D')
       {
            sea_level--;
       }
   }

   return valley;
}
