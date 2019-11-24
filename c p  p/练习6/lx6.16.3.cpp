#include <stdio.h>
int main (void){
	char ch[6];
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=i;j++)
		{ 
		ch[6-j]='G'-j;
		printf("%c",ch[6-j]);
		}
		printf("\n");
	} 
	return 0; 
}
