#include <stdio.h>
int main(void){
	int sz[8];
	for(int i=0;i<8;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(int i=0;i<8;i++)
	{ 
	printf("%d",sz[7-i]);
	} 
	return 0;
}
