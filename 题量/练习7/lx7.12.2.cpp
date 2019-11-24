#include <stdio.h>
int main(void){
	int a=0;
	char ch;
	while((ch=getchar())!='#')
	{
		if(a%8==0){
		
		printf("\n");
	}
	a++;
	printf("%c%d",ch,ch);
	
	}
	return 0;
}
