#include <stdio.h>
int main(void){
	int year=12,father=32;
	while(1)
	{
		year++;
		father++;
		if(father==2*year)
		break;
	}
	printf("%d%d",year,father); 
	return 0;
}
