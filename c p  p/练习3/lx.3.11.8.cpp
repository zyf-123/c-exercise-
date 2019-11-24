#include <stdio.h>
int main (void){
	float i;
	printf("請輸入你的杯數：");
	scanf("%f",&i);
	printf("你所擁有的杯數轉換為品脫為：%f\n轉換為營司：%f\n轉換湯勺為：%f\n轉換茶勺為：%f",i/2,i*8,i*16,i*48);
	return 0; 
}
