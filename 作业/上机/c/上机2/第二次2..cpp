#include <stdio.h>
int main(void){
	float f,c;
	printf("请输入一个华氏温度：");
	scanf("%f",&f);
	c=(float)5/9*(f-32);
	printf("华氏温度是：%f摄氏温度是：%f",f,c);
	return 0;	
}
