#include <stdio.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<=2019;i++)
	{
			int b = i;
			while(b!=0){
				int a = b%10;
				if(a==2 || a==0||a==1||a==9){
					sum+=i;
					break;
				}
			b/=10;
			}
	}
	printf("%d",sum);
 	return 0;
}


