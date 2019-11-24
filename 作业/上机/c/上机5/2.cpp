#include <stdio.h>
int main(void){
	int a,b,c,d,max;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>=c&&a>=d)
		{
			max=a;
		}
		else if(c>=a&&c>=d)
		{
			max=c;
		}
		else 
		{
			max=d;
		}
	}
	else
	{
		if(b>=c&&b>=d)
		{
			max=b;
		}
		else if(c>=b&&c>=d)
		{
			max=c;
		}
		else 
		{
			max=d;
		}
	}
	printf("%d",max);
	return 0;
}
