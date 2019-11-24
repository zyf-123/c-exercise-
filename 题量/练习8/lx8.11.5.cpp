#include <stdio.h>
int main(void){
	int high=100,low=0;
	int i;
	char ch;
	i=(high+low)/2;
	printf("%d",i);
	while((ch=getchar())!='y')
	{
	if(ch=='d')
	{
		high=i-1;
		i=(high+low)/2;
	printf("%d",i);
	continue;
	}
	if(ch=='x')
	{
		low=i+1;
		i=(high+low)/2;
	printf("%d",i);
	continue;
	}
	}
	
}
