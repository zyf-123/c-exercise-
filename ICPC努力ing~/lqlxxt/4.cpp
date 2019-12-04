#include <stdio.h>
int main(void)
{
	int i,j=0,sum=0;
	for(i=1;i<=100;i++)
	{
		j=i+j;
		sum+=j;
	}
	printf("%d",sum);
	
 	return 0;
}
 
