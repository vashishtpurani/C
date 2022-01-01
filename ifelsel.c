#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter +,-,*,/,modlus operator :");
    scanf("%c",&c);
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    if(c=='+')
    {
        printf("addition of a & b : %d/n",(a+b));
    }
    else if(c=='-')
    {
        printf("substration of a & b : %d\n",(a-b));
    }
    else if(c=='*')
    {
        printf("product of a & b : %d\n",(a*b));
    }
    else if(c=='/')
    {
        printf("division of a & b : %d\n",(a/b));
    }
    else if(c=='%')
    {
        printf("reminder of a & b : %d \n",(a%b));
    }
    else
    {
        printf("Invalid Input");
    }


}
