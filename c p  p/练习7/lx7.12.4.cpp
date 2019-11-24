#include <stdio.h>
int main(void){
	char ch;
	while(scanf("%c",&ch)&&ch!='#')
	{
		if(ch=='.')
		{
			printf("!");
		}
		else if(ch=='!')
		{
			printf("!!");
		} 
		else
		printf("%c",ch);
	}
	return 0;
}
