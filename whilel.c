#include<stdio.h>
int main()
{
    int a;
    printf("enter a number a less than 20 >");
    scanf("%d",&a);
    while(a<20)
    {
        printf("%d \n",a);
        a++;
    }

}