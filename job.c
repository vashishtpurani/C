#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age<18)
        printf("not eligible for job\n");
    else
    {
        if((age>=18)&&(age<=60))
        {
            printf("eligible for the job\n");
        }
        else
        {
            printf("not eligible for job\n");
        }    
    }    
}