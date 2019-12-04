#include <stdio.h>
int main(void)
{	//int i;j,n,flag;
	int (*pa)[3];
	int a[2][3]={{1,2,3},{4,5,6}};
	pa=a+1;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",(*pa)[j]);
		}
	}

 	return 0;
}

