#include <stdio.h>
int main(void){
	int a[12],i;
	for(i=0;i<12;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<12;i++)
	{
		if(i%4==0)
		printf("\n");
		printf("%6d",a[i]);
		
	}
	return 0;
}
