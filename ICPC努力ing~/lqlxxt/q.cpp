#include <stdio.h>
int main(void)
{
	int i=1,sum=1,js=0;
	for(i;sum<108;i+=2)
	{
		sum=sum+i;
		js++;
	}
	printf("%d",js);
 	return 0;
}

