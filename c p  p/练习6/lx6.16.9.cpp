#include <stdio.h>
double zidingyi(double i,double j);
int main (void){
	double i,j; 
	for(;scanf("%lf%lf",&i,&j)==2;)
	{
	
	printf("%lf",zidingyi(i,j));	
	}
	return 0;
}
double zidingyi(double i,double j)
{ 
	double zdy;
	zdy=(i-j)/(i*j);
	return zdy;
}
