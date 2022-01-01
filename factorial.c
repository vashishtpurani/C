#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("Enter a number :");
    scanf("%d",&a);
    while(a<=2)
    {
        c=a*b;
        printf("%d",c);
        a--;
    }
}