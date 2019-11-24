#include <stdio.h>
int main (void){
	double i,j;
	printf("请输入俩个浮点数："); 

	for(;scanf("%lf%lf",&i,&j)==2;)
	{
		printf("%lf\n",(i-j)/(i*j));
	}
	return 0;
}
