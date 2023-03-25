#include<iostream>

int get_money_spent(int *, int *, int, int, int);

using namespace std;

int main()
{
    int budget, number_of_keyboards, number_of_usbdrives;

    cin >> budget;
    cin >> number_of_keyboards;
    cin >> number_of_usbdrives;

    int keyboard_prices[number_of_keyboards], usbdrive_prices[number_of_usbdrives];

    for(int i = 0; i < number_of_keyboards; i++)
    {
        cin >> keyboard_prices[i];
    }

    for(int i = 0; i < number_of_usbdrives; i++)
    {
        cin >> usbdrive_prices[i];
    }

    int answer = get_money_spent(keyboard_prices, usbdrive_prices, budget, number_of_keyboards, number_of_usbdrives);

    cout << answer;

    return 0;
}

int get_money_spent(int * keyboard_prices, int * usbdrive_prices, int budget, int number_of_keyboards, int number_of_usbdrives)
{
   int amount = -1;

   for(int i = 0; i < number_of_keyboards; i++)
   {
       for(int j = 0; j < number_of_usbdrives; j++)
       {
           int cost = keyboard_prices[i] + usbdrive_prices[j];

           if (cost <= budget)
           {
                if (cost > amount)
                {
                    amount = cost;
                }
           } 
       } 
   }

   return amount;
}
