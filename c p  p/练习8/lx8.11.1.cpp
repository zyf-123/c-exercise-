#include <stdio.h>
int main(void){
	char ch=0;
	int i=0;
	while((ch=getchar()) !=EOF)
	{
		i++;
	}
	printf("%d",i);
	return 0;
}
