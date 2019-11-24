#include<stdio.h>
int main(void){
	long long int i;
	long long int sum;
	scanf("%d",&i);
	if(i==1)
	sum=1;
	else
	sum=(1+i)*(i/2);
	printf("%lld",sum); 
	return 0;
}
