#include<stdio.h>
int main()
{
    int a=10;
    /*do {
        statement(s);
    } while( condition );*/

    do {
        printf("Value of a > %d \n",a);
        a+=1;

    } while (a<20);

        return 0;

}