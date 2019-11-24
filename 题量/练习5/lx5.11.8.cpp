#include <stdio.h>
int main(void){
	int i,j;
	printf("请输入你的永久除数：\n");
	scanf("%d",&i);
	printf("请输入你的第一次被除数：\n");
	scanf("%d",&j);
	while(j>0)
	{  
	printf("%d",j%i);
	printf("请输入接下来的被除数："); 
	scanf("%d",&i);
	}
	return 0; 
} 
