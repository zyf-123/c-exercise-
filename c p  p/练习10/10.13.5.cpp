double a(double a[],int n)
{
	int i;
	double jg=0,max=0,min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
		jg=max-min;
	return jg;
}
#include <stdio.h>
int main(void){
	double max;
	double b[5]={1.0,2.4,3.9,41.2,15};
	max=a(b,sizeof(b)/sizeof(b[0]));
	printf("%f",max);
	return 0;
}
