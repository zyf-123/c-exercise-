#include <stdio.h>
int main(void){
	char a[26];
	a[0]='a';
	int i; 
	for(i=0;i<26;i++)
	{
	a[i]='a'+i;
	printf("%c\t",a[i]);
	}
	return 0;
}
