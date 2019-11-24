#include <stdio.h>
void a(double a[],int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%f\n",a[i]);	
	}
	
}
int main(void){
	double max;
	double b[5]={1.0,2.4,3.9,41.2,15};
	a(b,sizeof(b)/sizeof(b[0]));
	return 0;
}
