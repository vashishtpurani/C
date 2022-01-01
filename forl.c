#include <stdio.h>
 
int main () 
{
   int a;
   printf("Enter value of a >");
   scanf("%d",&a);

   for( a = a; a < 10000; a = a + 1 )
   {
      printf("value of a: %d \n", a);
      a++;

   }
 
   return 0;
}