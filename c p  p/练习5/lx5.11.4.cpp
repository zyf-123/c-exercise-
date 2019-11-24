#include <stdio.h>
#define jinzhi "60"
int main(void){
	int i=1;
	printf("请输入你的身高："); 
	while(i>0)
	{  
	scanf("%d",&i);
	printf("身高是%4dcm，%4.2f英寸。\n请继续输入：",i,float(i)/2.54);	
	}
	return 0; 
} 
