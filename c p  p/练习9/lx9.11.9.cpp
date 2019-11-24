#include <stdio.h>
double power(double n,double p);
int main(void){
	double i;
	double k;
	scanf("%lf%lf",&i,&k);
	if(k==0)
		printf("任何数的0次方都是1，没有意义");
	else
	printf("%lf的%d次方等于%lf",i,k,power(i,k));
	return 0;
}

double power(double n,double p)
{
	double pow=1;
	
	
		
		if(p>0)
			{
				printf("%d",p); 
				pow=n*power(n,(p-1));
		
			}

  else if(p<0)
 	{	
 		
 		pow=(1/n)*power(n,(p+1));
 	
 		return pow;          	
	}
		else 
		pow=1;
		return pow;
} 

