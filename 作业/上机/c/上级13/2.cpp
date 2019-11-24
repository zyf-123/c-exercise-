#include <stdio.h>
int main(void){
	int a[10]={70,80,90,100,110,120,150,223,11,12};
	int i,*max;
	max=a;
	for(i=1;i<10;i++)
	{
		if(*(a+i)>*max)
		max=&a[i];
		
	}
	printf("%d",*max);
}
