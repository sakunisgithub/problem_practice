#include<iostream>

using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        long long int array[3];

        for (int k = 0; k < 3; k++)
        {
            cin >> array[k];
        }

        long long int n = array[0];
        long long int d = array[1];
        long long int h = array[2];

        long long int heights[n];

        for (int k = 0; k < n; k++)
        {
            cin >> heights[k];
        }
        
        long double area = 0;

        double triangle_area = 0.5 * d * h;

        for (int k = 0; k < n - 1; k++)
        {
            if (heights[k+1] - heights[k] >= h)
            {
                area += triangle_area;
            }
            else if (heights[k+1] - heights[k] < h)
            {
                long double t = ((long double)(d * (heights[k+1] - heights[k])) / (2 * h));

                area += (heights[k+1] - heights[k]) * (d - t);
            }
            
        }

        area += triangle_area;
        
        printf("%.8Lf\n", area);
        
    }
    
    return 0;
}