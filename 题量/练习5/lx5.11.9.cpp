#include <stdio.h>
void Temperatures(double n);
int main (void){
	double i; 
	while(1==scanf("%lf",&i)){
	Temperatures(i);
	printf("��������룺"); 
}
	printf("�������ַǷ���"); 
	return 0;
}
void Temperatures(double n)
{
	double const wendu=273.16;
	printf("�����¶�Ϊ��%3.2lf\n",5.0*9.0*(n-32.0));
	printf("�����¶�Ϊ��%3.2lf\n",n+wendu);
	
}
