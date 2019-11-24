#include <stdio.h>
double large_of(double *x,double *y);
int main (void){
	double x,y;  
	scanf("%lf%lf",&x,&y);
	printf("%lf%",large_of(&x,&y));
}
 double large_of(double *x,double *y)
 {	
 double max;
	if(*x>*y)
	{
		max=*x;
	}
	else
	{
		max=*y; 
	}
	return max;
 }
