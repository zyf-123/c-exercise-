#include <stdio.h>
#include <string.h>
int main(void){
	char name[128];
	printf("ÇëÊäÈëÄãµÄµ¥´Ê:");
	scanf("%s",name);
	int j=strlen (name);
	for(int i=1;i<=j;i++)
	{
		printf("%c",name[j-i]);
	} 
	return 0;
}
