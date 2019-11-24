#include <stdio.h>
#include<string.h>
int main(void){
	char name[20];
	int i;
	scanf("%s",name);
	i=strlen(name);
	printf("%d",i);
	printf("a.\"ÄãµÄĞÕÃûÊÇ%s\"\n",name);
	printf("b.\"%20s\"\n",name);
	printf("c.\"%-20s\"\n",name);
	printf("d.%*s",i+3,name);
	
	return 0;
}
