#include <stdio.h>
int main(void){
	int i=1,x,max;
	do
	{
		scanf("%d",&x);
		if(i==1)
		{
			max=x;
		}
		else
		{
			if(x>max)
			{
				max=x;
			}
		}
		i++;
	}
	while (i<=10);
	printf("%d",max);
	return 0;
}
