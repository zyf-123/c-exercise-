#include <stdio.h>
double ave(double x,double y);
int main (void){
	double i,j;
	scanf("%lf%lf",&i,&j);
	printf("%lf",ave(i,j));
	return 0;
}
double ave (double x,double y)
{
	double jieguo;
	jieguo=1.0/((1.0/x+1.0/y)/2.0);
	return jieguo;
}
