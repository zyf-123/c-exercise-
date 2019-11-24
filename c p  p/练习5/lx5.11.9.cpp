#include <stdio.h>
void Temperatures(double n);
int main (void){
	double i; 
	while(1==scanf("%lf",&i)){
	Temperatures(i);
	printf("请继续输入："); 
}
	printf("输入数字非法！"); 
	return 0;
}
void Temperatures(double n)
{
	double const wendu=273.16;
	printf("摄氏温度为：%3.2lf\n",5.0*9.0*(n-32.0));
	printf("开氏温度为：%3.2lf\n",n+wendu);
	
}
