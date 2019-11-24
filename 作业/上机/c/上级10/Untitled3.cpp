#include<stdio.h>
int main(void){
	int a[20];
	int i,max,min,sum=0;
	float avg;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
			 
	}
	max=min=a[0];
	for(i=0;i<20;i++)
{
	if(a[i]>=max)
		max=a[i];
	if(a[i]<=min)
		min=a[i];
	sum=a[i]+sum;
}
	avg=sum/20.0;
	printf("max=%dmin=%davg=%fsum=%d",max,min,avg,sum);
	return 0;

} 
