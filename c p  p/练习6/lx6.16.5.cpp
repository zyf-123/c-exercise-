#include <stdio.h>
int main (void){
	char l;
	printf("请输入一个大写字母："); 
	scanf("%c",&l);
	int j=int(l)-64;
	for(int i=1;i<=j;i++)
	{
		char ch='A'-1;
		for(int m=i;m<=j-1;m++)
		{
			printf(" ");
		}
		for(int k=0;k<i;k++)
		{
			printf("%c",++ch);
		}
		for(int k=1;k<i;k++)
		{
			printf("%c",--ch);
		}
		printf("\n");
	}
}
