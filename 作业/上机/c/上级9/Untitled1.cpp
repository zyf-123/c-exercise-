#include <stdio.h>
int main(void){
	int a[10]={70,80,60,90,75,85,65,50,88,72};
	int i,x;
	scanf("%d",&x); 
	for(i=0;i<10;i++)
		if(a[i]==x) break;
		if(i<10)printf("found!    index:%d",i);
		else printf("not found\n");
	} 
