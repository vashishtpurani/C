#include<stdio.h>
int main()
{
    int rows,a,b;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for(a=rows;a>0;a--)
    {
        for(b=a;b>0;b--)
        {
            printf("*");
        }
        printf("\n");
    }    
}