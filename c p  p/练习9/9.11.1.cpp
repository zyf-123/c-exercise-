#include<stdio.h>
double min (double x,double y);
int main (void)
{
	double i,j;
	scanf("%lf%lf",&i,&j);
	printf("%lf",min(i,j));	 
}
double min(double x,double y)
{
	double min;
	min=x;
	if(min>y)
	min=y;
	return min;
}
 
