#include<stdio.h>
int main()
{
    int choice;
    printf("enter yout choice:");
    scanf("%d",choice);
    switch(choice)
    {
        case 1:
            printf("expert in C/C++\n");
        break;

        case 2:
            printf("expert in Python\n");
        break;

        case 3:
            printf("expert in Html\n");
        break;

        case 4:
            printf("expert in Android\n");
        break;    

        case 5:
            printf("expert in Ios\n");
        break;

        default:
            printf("Go study\n");
    }
}