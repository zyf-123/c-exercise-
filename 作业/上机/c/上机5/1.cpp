#include<stdio.h>
int main(void){
	int i,x;
	scanf("%d",&i);
	if(i<1)
	{
		x=i;
	}
	else if(i>=10)
	{
		x=3*i-11;
	}
	else
	{
		x=2*i-11;
	}
	printf("%d",x);
	return 0;
}
