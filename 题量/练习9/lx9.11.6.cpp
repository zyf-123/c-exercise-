#include <stdio.h>
void bidaxiao (int *x,int *y,int *z)
{
	int temp;
	if(*x<*y)
	{
	temp=*y;
	*y=*x;
	*x=temp;
	}
	if(*x<*z)
	{
	temp=*z;
	*z=*x;
	*x=temp;
	}
	if(*y<*z)
	{
	temp=*z;
	*z=*y;
	*y=temp;
	}
}
int main(void){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	bidaxiao(&x,&y,&z);
	printf("%d%d%d",x,y,z);
} 
