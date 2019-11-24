#include <stdio.h>
int main(void){
	int x,y;
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d\t%d",x,y);
	return 0; 
}
