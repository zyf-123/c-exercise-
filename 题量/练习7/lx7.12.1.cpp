#include <stdio.h>
int main(void){
	int a,b,c;
	a=b=c=0;
	char ch;
	while(scanf("%c",&ch)&&ch!='#')
	{
		switch(ch)
		{
		
		case' ' :a++;
		break;
		case'\n':b++;
		break;
		default:
		c++;
		}
	}
	printf("%d\t%d\t%d",a,b,c);
	return 0;
}
