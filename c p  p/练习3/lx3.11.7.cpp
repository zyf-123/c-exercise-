#include <stdio.h>
int main (void){
	float i=2.54;
	int j;
	printf("請輸入你身高多少英寸：");
	scanf("%d",&j);
	printf("你身高%f厘米。",j*i);
	return 0;
} 
