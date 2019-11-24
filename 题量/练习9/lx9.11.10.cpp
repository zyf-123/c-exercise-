#include <stdio.h>
void tobinary(unsigned long  n, int i); 
int main (void){
	unsigned long n1;
	int n2;
	while(scanf("%lu%d",&n1,&n2)==2)
	{

		tobinary(n1,n2);
	}
}
void tobinary (unsigned long n,int i)
{
	int r;
	r=n%i;
	if(n>=i)
		tobinary(n/i,i);
	
	printf("%d",r);
}
