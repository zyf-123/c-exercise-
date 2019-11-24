#include <stdio.h>
int main(void){
	int year;
	float s;
	year=1994;
	s=12;
	do
	{
		year++;
		s=s*1.05;	
	} 
	while(s<20);
	printf("year=%d",year); 
}
