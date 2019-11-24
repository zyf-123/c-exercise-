#include <stdio.h>
int main(void)
{
    float a=100.0;
    int i=1;
	do
    {
    	a=(a*1.08)-10;
    	i++;
	}while(a>0);
	printf("%d",i);
    return 0;
}
