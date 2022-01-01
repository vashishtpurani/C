#include<stdio.h>
int main()
{
    int birth_year,current_age;
    printf("Enter Your birth_year>");
    scanf("%d",&birth_year);
    current_age=2021-birth_year;
    
    if (birth_year>2022);
    {
        printf("NOT BORN YET!!");
    }

    else(birth_year<2022)
    {
        printf(" Your age is>%d \n",current_age);
    }

    return 0;
}