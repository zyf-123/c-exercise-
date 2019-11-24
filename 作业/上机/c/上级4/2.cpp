#include <stdio.h>
#include <math.h>
int main(void){
	//3 12 4的结果是 -0.37，-3.63
	//1 6 9的结果是 -3 -3
	//2 5 8的结果是  xushu
	
	float a,b,c,d,x1,x2,p,q;
	printf("a,b,c=");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(a!=0)
{
	
	if(d>=0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("x1=%5.2f\nx2=%5.2f\n",x1,x2);
	}
	else
	{
		p=-b/(2*a);
		q=sqrt(-d)/(2*a);
		printf("x1=%5.2f+%5.2fi\nx2=%5.2f-%5.2fi\n",p,q,p,q);
	}
}
	else 
	printf("不是二元一次方程");
	return 0;
}
