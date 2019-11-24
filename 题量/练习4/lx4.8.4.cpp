#include <stdio.h>
int main (void){
	float tall;
	char name[20]; 
	printf("请输入你的姓名：");
	scanf("%s",name);
	printf("请输入你的升高：单位（厘米）");
	scanf("%f",&tall);
	tall/=100;
	printf("%s,you are %.2f mils tall",name,tall);
	
	return 0; 
}
