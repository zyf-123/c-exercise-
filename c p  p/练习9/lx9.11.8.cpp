#include <stdio.h>
double power(double n,int p);
int main(void){
	double i;
	int  k;
	scanf("%lf%d",&i,&k);
	if(k==0)
		printf("任何数的0次方都是1，没有意义");
	else
	printf("%lf的%d次方等于%lf",i,k,power(i,k));
	return 0;
}

double power(double n,int p)
{
	double pow=1;
	int i;
	
	if(p>0)
	{
	
		for(i=1;i<=p;i++)
			pow*=n;
			return pow;
	}
 	else
 	{	
 		for(i=-1;i>=p;i--)
 		pow*=n;
 		pow=1.0/pow;
 		return pow;		
	}
} 
