#include <stdio.h>
void chline (int x,int y);
int main(void){
	int i,j;
	scanf("%d%d",&i,&j);
	chline(i,j);
	return 0;
} 
void chline (int x,int y)
{
	for(int z=1;z<=x;z++){
	for(int w=1;w<=y;w++)
	printf("*");
	printf("\n");
}
}
