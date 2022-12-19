#include<stdio.h>

int matrix[2][2];

int check();

int beautiful();

void rotate();

int main()
{
    int testcases;
    scanf("%d", &testcases);

    int output[testcases];

    for (int i = 0; i < testcases; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &matrix[j][k]);
            }
        }

        output[i] = check();
    }
    
    for (int i = 0; i < testcases; i++)
    {
        if (output[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    return 0;
}

int check()
{
    for(int i = 0; i < 4; i++)
    {
        if (beautiful())
        {
            return 1;
        }
        else
        {
            if (i == 3)
            {
                return 0;
            }
            else
            {
                rotate();
            }
        }
    } 
}

int beautiful()
{
    if (matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1] && matrix[0][0] < matrix[1][0] && matrix[0][1] < matrix[1][1])
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void rotate()
{
    int n1 = matrix[0][0];
    int n2 = matrix[0][1];
    int n3 = matrix[1][1];
    int n4 = matrix[1][0];

    matrix[0][0] = n4;
    matrix[0][1] = n1;
    matrix[1][1] = n2;
    matrix[1][0] = n3;
}

// https://codeforces.com/contest/1772/problem/B