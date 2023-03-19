#include<iostream>

int page_count(int, int);

using namespace std;

int main()
{
    int total_pages, destination_page;

    cin >> total_pages >> destination_page;

    int output = page_count(total_pages, destination_page);

    cout << output << "\n";

    return 0;
}

int page_count(int total_pages, int destination_page)
{
   int pages_to_flip_from_front, pages_to_flip_from_back;

   if (destination_page % 2 == 0)
   {
        pages_to_flip_from_front = ((destination_page - 1) / 2) + 1;
   }
   else if (destination_page % 2 != 0)
   {
        pages_to_flip_from_front = (destination_page - 1) / 2;
   }

   if (total_pages % 2 == 0)
   {
       if (destination_page % 2 == 0)
       {
            pages_to_flip_from_back =  (total_pages - destination_page) / 2;
       }     
       else
       {
            pages_to_flip_from_back = (total_pages - (destination_page - 1)) / 2;
       }
   }
   else
   {
       if (destination_page % 2 == 0)
       {
            pages_to_flip_from_back = ((total_pages - 1) - destination_page) / 2;
       } 
       else
       {
            pages_to_flip_from_back = ((total_pages - 1) - (destination_page - 1)) / 2;
       }
   }

   int minimum;

   (pages_to_flip_from_front >= pages_to_flip_from_back) ? (minimum = pages_to_flip_from_back) : (minimum = pages_to_flip_from_front);

   return minimum;
}
