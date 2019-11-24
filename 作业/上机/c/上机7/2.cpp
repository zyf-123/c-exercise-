#include <stdio.h>
int main(void){
	int x=0;
	while(1)
	{
		x++;
		if(x%2==1&&x%3==2&&x%5==4&&x%6==5&&x%7==0)
		{
			printf("%d",x);
			break;
		} 
	}
}
