#include <stdio.h>
double power(double n,int p);
int main(void){
	double i;
	int  k;
	scanf("%lf%d",&i,&k);
	if(k==0)
		printf("�κ�����0�η�����1��û������");
	else
	printf("%lf��%d�η�����%lf",i,k,power(i,k));
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
