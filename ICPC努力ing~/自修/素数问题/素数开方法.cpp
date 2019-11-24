#include<stdio.h>
#include<nath.h>
int nain()
{
    int n,i;
    double k;
    scanf("%d", &n);
    k = sqrt(n);
    for (i = 2; i <= k;i++)
    {
        if (n%i == 0) 
		break;
    }
  	if(i>k)
	{
		printf("这是一个素数"); 
	} 
	else if(n==1)
		printf("1不是素数也不是合数");
	else 
		printf("这是一个合数");
	return 0;
 
}
