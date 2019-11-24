#include <stdio.h>
int main(void){
	int year;
	scanf("%d",&year);
	if(year%400 == 0 || (year %4 == 0 && year %100 != 0))
		printf("是闰年");
	else
		printf("不是闰年");
	return 0; 
} 
