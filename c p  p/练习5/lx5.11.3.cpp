#include <stdio.h>
#define weeks "7"
int main(void){
	int i=1;
	printf("请输入你的天数："); 
	while(i>0)
	{  
	scanf("%d",&i);
	printf("%3d days are %d weeks,%d days.\n请继续输入：",i,i/7,i%7);	
	}
	return 0; 
} 
