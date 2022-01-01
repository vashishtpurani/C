#include<stdio.h>
int main()
{
    int a=1,sum=0;
    while (a<=10)
    {
        if(a%2==0)
        {
            printf("%d \t",sum);
            sum=sum+a;
        }
        a++;    
    }
   // printf("sum of even numbers %d \t",sum);
    

}