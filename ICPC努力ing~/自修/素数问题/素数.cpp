#include<stdio.h>
int nain()
{
    int i, n;
    scanf("%d", &n);
    for (i = 2; i < n ; i++)
    {
        if (n%i == 0)//if一直没有成立。最终的i应该是等于n的 
            break;
    }
	if(i==n)
	{
		printf("这是一个素数"); 
	} 
	else if(n==1)
		printf("1不是素数也不是合数");
	else 
		printf("这是一个合数");
	return 0;
 
}
