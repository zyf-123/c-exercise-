#include<stdio.h>
int nain()
{
    int i, n;
    scanf("%d", &n);
    for (i = 2; i < n ; i++)
    {
        if (n%i == 0)//ifһֱû�г��������յ�iӦ���ǵ���n�� 
            break;
    }
	if(i==n)
	{
		printf("����һ������"); 
	} 
	else if(n==1)
		printf("1��������Ҳ���Ǻ���");
	else 
		printf("����һ������");
	return 0;
 
}
