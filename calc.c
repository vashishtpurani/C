#include<stdio.h>
int main()
{
    char c;
    int a,b;
    printf("Enter a character");
    scanf("%c",&c);
    printf("Enter number a");
    scanf("%d",&a);
    printf("Enter number b");
    scanf("%d",&b);
    switch(c)
    {
        case'+':
        printf("addition = %d\n",a+b);
        break;

        case'-':
        printf("substration = %d\n",a-b);
        break;

        case'*':
        printf("product = %d\n",a*b);
        break;

        case'/':
        printf("division = %d\n",a/b);
        break;

        case'%':
        printf("modlus = %d\n",a%b);
        break;

        default:
        printf("Invaild Operator");
    }
}