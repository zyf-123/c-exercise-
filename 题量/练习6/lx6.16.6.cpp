#include <stdio.h>
int main(void){
	int i;
	printf("请输入表格的上限：");
	scanf("%d",&i);
	for(int j=1;j<=i;j++)
	{
		printf("%10d%10d%10d\n",i,i*i,i*i*i);
	} 
	return 0;
}
