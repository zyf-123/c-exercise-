#include <stdio.h>
#include <float.h>
int main(void){
	float i=1.0/3.0;
	double j=1.0/3.0;
	printf("%0.6f %0.12f %0.16f\n",i,i,i);
	printf("%0.6f %0.12f %0.16f",j,j,j);
	
	return 0;
}
