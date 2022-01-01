#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0;
	for(i;i<1;i+=i)
        printf("%d", rand() %2);
    printf("\n");
	return 0;
}