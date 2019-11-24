#include <stdio.h>
#define jinzhi "60"
int main(void){
	int i=1;
	printf("请输入你的分钟数："); 
	while(i>0)
	{  
	scanf("%d",&i);
	printf("时间是%d个小时，%d个秒钟。\n请继续输入：",i/60,i*60);	
	}
	return 0; 
} 
