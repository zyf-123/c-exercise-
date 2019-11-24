#include <stdio.h>
int main (void){
	int i=0;
	double a=100.0,b=100.0;
	do
	{
		i++;
		a=a+10;
		b=b*(1.05);
	} while(b<a);
	printf("%lf\t%lf",a,b);
	return 0;
}
