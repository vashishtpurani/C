#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of month >");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
        printf("the enterd month is january");
        break;

        case 2:
        printf("the enterd month is feb");
        break;

        case 3:
        printf("the enterd month is march");
        break;

        case 4:
        printf("the enterd month is april");
        break;

        case 5:
        printf("the enterd month is may \n");
        break;

        case 6:
        printf("the enterd month is june \n");
        break;

        case 7:
        printf("the enterd month is july \n");
        break;

        case 8:
        printf("the enterd month is aug \n");
        break;

        case 9:
        printf("the enterd month is sept \n");
        break;

        case 10:
        printf("the enterd month is oct \n");
        break;

        case 11:
        printf("the enterd month is nov \n");
        break;

        case 12:
        printf("the enterd month is dec \n");
        break;
        
        default:
            printf("U Fool There are only 12 months.\n");
            break;

    
    }
}