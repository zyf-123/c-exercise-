#include <stdio.h>
int main(void){
	float x=13.0;
	int i=0;
	do
	{
		x=x*(1+0.02);
		i++;
	}
	while(x<15);
	printf("%d",i);
	return 0;
}
