#include <stdio.h>

int printspace(int x)
{
    int space ;
    if (x > 1)
    {
        for(int i = 1, k = 0; i <= x; ++i, k = 0)
    {
        for(space = 1; space <= x-i; ++space)
        {
            printf(" ");
        }

        while(k != 2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }    
    }
    else
    {
        printf("Error");
    }
    return 0 ;
}

int main()
{
    int rows;
    scanf("%d",&rows);
    printspace(rows);
    
    return 0;
}
