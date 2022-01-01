#include<stdio.h>
int main()
{
    int a,sum = 0,c,value;
    printf("Enter how many integeres you want to add :");
    scanf("%d",&c);
    for(a=1;a<=c;a++){
        printf("Enter integer no %d :",a);
        scanf("%d",&value);
        sum=value+sum;
    }
    a-=1;
    printf("Sum of %d integeres is %d \n",a,sum);

}