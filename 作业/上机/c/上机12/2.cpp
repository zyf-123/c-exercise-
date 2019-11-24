#include <stdio.h>
#include <string.h>
int main(void){
	char a[80];
	int i,n;
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
