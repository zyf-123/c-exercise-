#include <stdio.h>
int main(void){
	int i,j,sum;
	j=-1;
	for(i=1;i<=101;i=i+2)
	{
		j=-j;
		sum=sum+(i*j);
	}
	printf("%d",sum);
}
