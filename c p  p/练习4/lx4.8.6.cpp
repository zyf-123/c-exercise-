#include<stdio.h>
#include<string.h>
	int main(void){
	char firstname[20];
	char lastname[20];
	printf("请输入你的名字："); 
	scanf("%s",lastname);
	printf("请输入你的姓:");
	scanf("%s",firstname);
	int i=strlen(firstname);
	int j=strlen(lastname);
	printf("%s %s\n",lastname,firstname);
	printf("%*d %*d\n",j,j,i,i);
	printf("%s %s\n",lastname,firstname);
	printf("%-*d %-*d",j,j,i,i);
	
	return 0;
}                                                                      
