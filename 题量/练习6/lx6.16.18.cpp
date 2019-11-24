#include <stdio.h>
int main(void){
	int a=5;
	int i=0;
	
	while(a<150)
	{
		i++;
		a=(a-i)*2;
		if(a<150)
		{ 
		printf("第%d周有%d好友\t",i,a);
		} 
	}
	return 0;
}
