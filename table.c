#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("Table of :");
    scanf("%d",&a);
 //   for(b=1;b<=10;b++)
   // {
   // printf("%d X %d = %d \n",a,b,(a*b));
    
   // }
   while(b<=10)
   {
       printf("%d X %d = %d \n",a,b,(a*b));
       b++;
   }
}