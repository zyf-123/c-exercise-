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
		printf("����һ������"); 
	} 
	else if(n==1)
		printf("1��������Ҳ���Ǻ���");
	else 
		printf("����һ������");
	return 0;
 
}
