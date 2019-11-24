#include <stdio.h>
int mian(void){
	int i;
	printf("请输入一个数字：");
	scanf("%d",&i);
	while(i++>10)
	{
	printf("%d",&i);
	} 
	return 0;
}
