#include <stdio.h>
void zizhuhanshu(double n);
int main (void){
	double i; 
	printf("������һ����������");
	scanf("%lf",&i);
	zizhuhanshu(i); 
	
	return 0;
}
void zizhuhanshu (double n)
{
	printf("%lf",n*n);
}
