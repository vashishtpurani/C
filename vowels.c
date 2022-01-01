#include<stdio.h>
int main()
{
    char c;
        printf("Enter any alphabet");
        scanf("%c",&c);
        switch(c)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'U':
            case 'u':
                printf("U have entered a vowel.\n");
                break;
            default:
                printf("U have entered a consanat.\n");    
        }
}