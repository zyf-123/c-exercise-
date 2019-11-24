#include <stdio.h>
#include <math.h>
int main (void){
	int o[8];
	int i=1;
	for(i;i<=8;i++)
	{
		o[i-1]=pow(2,i);
	}
	i=0;
	do
	{
	printf("%d\t",o[i]);
	i++;	
	}while (i<8);
	return 0;
}
