int a(double a[],int n)
{
	int i,jg=0;
	for(i=0;i<n;i++)
		if(a[i]>jg)
		jg=i;
	return jg;
}
#include <stdio.h>
int main(void){
	int max;
	double b[5]={1.0,2.4,3.9,41.2,15};
	max=a(b,sizeof(b)/sizeof(b[0]));
	printf("%d",max);
	return 0;
}
