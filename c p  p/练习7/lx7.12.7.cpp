#include <stdio.h>
int main (void){
	int i=0;
	int j=0;
	int k=0;
	scanf("%d",&i);
	if(i<40)
	j=10*40;
	else
	j=((i-40)*1.5+40)*10;
	if(j>=450)
	k=(j-450)*0.25+300*0.15+150*0.2; 
	else if(j<450)
	k=(j-300)*0.2+300*0.15;
	else
	k=j*0.15;
	printf("工资是：%d,税：%d,收入：%d",j,k,j-k);
	return 0;
}
