#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number > ");
    scanf("%d",&a);
    printf("Enter 2nd number > ");
    scanf("%d",&b);
    printf("Enter 3rd number > ");
    scanf("%d",&c);

    if ((a<b)&&(a<c))
    {
        printf("a = %d is the smallest number. \n",a);
    }
    else if ((b<a)&&(b<c))
    {
        printf("b = %d is the smallest number. \n",b);
    }
    else if((a==b)&&(b==c))
    {
        printf("a,b,c are equal");
    }
    else 
    {
        printf("c = %d is the smallest number. \n",c);
    }

    return 0;
}