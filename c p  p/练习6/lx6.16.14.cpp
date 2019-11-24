#include <stdio.h>
int main(void){
	double i[8],j[8];
	for(int k=0;k<8;k++)
	{
		scanf("%lf",&i[k]);
		j[k]=i[k]+j[k-1];
	}
	for(int k=0;k<8;k++)
	{
		printf("%lf\t",i[k]);
	
	}
	printf("\n");
	for(int k=0;k<8;k++)
	{
		printf("%lf\t",j[k]);
	
	}
	return 0;
}
