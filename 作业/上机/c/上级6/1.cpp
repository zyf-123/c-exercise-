#include <stdio.h>
int main(void)
{
	int x,max,i;
	scanf("%d",&x);
	max=x;
	i=1;
	while(i<=9)
	{
		scanf("%d",&x);
		if(x>max)
			max=x;
			i++;
	}
	printf("max=%d",max);
	}
