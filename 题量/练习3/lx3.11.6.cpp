#include <stdio.h> 
int main (void){
	double i=3.0e-23;
	int j=950;
	int k;
	double l;
	printf("請輸入水的誇脫數：");
	scanf("%d",&k);
	l=k*j/i;
	printf("水分子數量：%e",l);
	return 0;
} 
