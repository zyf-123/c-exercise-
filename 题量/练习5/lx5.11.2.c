#include <stdio.h>
int main(void){
	int i;
	printf("请输入一个数字：");
	scanf("%d",&i);
	int b=i+10;
	while(i<=b)
	{
	printf("%d",i);
	i++;
	} 
	return 0;
}
