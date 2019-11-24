#include <stdio.h>
int main(void){
	int x,max,i;
	max=0;
	i=1;;
	while(i<=10)
	{
		printf("x=");
		scanf("%d",&x);
		if(x>max)
			max=x;
		i++;
	}
	printf("%d",max);
	}
