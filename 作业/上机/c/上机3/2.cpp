#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float x;
	x=(a+b+c)/3.0;
	printf("%d%d%d\t%f",a,b,c,x);
	return 0;
}
