#include <stdio.h>
int main (void){
	double i,j;
	printf("������������������"); 

	for(;scanf("%lf%lf",&i,&j)==2;)
	{
		printf("%lf\n",(i-j)/(i*j));
	}
	return 0;
}
