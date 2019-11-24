#include <stdio.h>
int main(void){
	int b=0,c;
	scanf("%d",&c);
	int a[c]={1,1};
	for(b=2;b<=c;b++)
	{
		a[b]=a[b-1]+a[b-2];
		printf("%d",a[b]);
	} 
	return 0;
}
