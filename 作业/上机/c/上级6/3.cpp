#include <stdio.h>
int main(void){
	int i,j=1,sum=1;
	for(i=3;i<=101;i=i+2)
	{
		if(j%2!=0)
		{
			sum=sum-i;
		}
		if(j%2==0)
		{
			sum=sum+i;
		}
		j++;
	}
	printf("%d",sum);
	return 0;
}
