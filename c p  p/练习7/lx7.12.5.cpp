#include <stdio.h>
int main(void){
	char ch;
	while(scanf("%c",&ch)&&ch!='#')
	{
		switch(ch){
		
		case('.'):printf("!");
		continue;
		
		case('!'):printf("!!");
		continue;
		default: 
		printf("%c",ch);
		}
	}
	return 0;
}
