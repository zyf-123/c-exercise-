#include<stdio.h>
int main(void){
	long int m,n,k;
	scanf("%ld%ld%ld",&m,&n,&k);
	if(k>(m*n)-((m-1)+(n-1))||m+n<=3)
		printf("%d",-1);
	else
		printf("%d",m+n-2); 
	return 0;
}

