#include <stdio.h>
int main(void){
	char ch,chh;
	int j=0;
	while(scanf("%c",&ch)&&ch!='#')
	{
		if(ch=='i')
		{
			if(chh=='e')
			j++;
		}
		chh=ch;
	}
	printf("%d",j);
	return 0;
}
