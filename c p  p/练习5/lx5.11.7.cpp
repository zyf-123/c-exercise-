#include <stdio.h>
void zizhuhanshu(double n);
int main (void){
	double i; 
	printf("请输入一个浮点数：");
	scanf("%lf",&i);
	zizhuhanshu(i); 
	
	return 0;
}
void zizhuhanshu (double n)
{
	printf("%lf",n*n);
}
