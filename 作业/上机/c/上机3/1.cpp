#include<stdio.h>
int main(void){
	int a=5,b=7;
	float x=31.19;
	printf("a=%d,b=%d,a-b=%d,a/b=%d%%\n",a,b,a-b,a*100/b);
	printf("%4.2f,%9.1f,%7.4f,%e",x,x,x,x);
	return 0;
}
