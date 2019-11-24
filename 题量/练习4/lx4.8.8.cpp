#include <stdio.h>
#define jialun 3.785
#define yingli 1.609
int main(void){
	float i,j;
	printf("请输入你行程数：");
	scanf("%f",&i);
	printf("请输入油耗：\n");
	scanf("%f",&j);
	printf("%0.1f\n",j/i);
	printf("%0.1f\n",(i/yingli)/(j/jialun));
	printf("%0.1f\n",(j/i)*100);
	
	return 0; 
}
