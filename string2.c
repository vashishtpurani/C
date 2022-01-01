#include<stdio.h>
#include<string.h>
int main()
{
    char hell[12] = "hello";
    char hev[12] = "bye";
    char ear[12];
    int a;

    strcpy(ear,hell);
    printf("%s \n",ear);

    strcat(hell,hev);
    printf("%s \n",hell);

    a=strlen(hell);
    printf("%d \n",a);
}