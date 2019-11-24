#include <stdio.h>
int main()
{
	int i,j,sum=0,max,length,width;
	int arr[5][5];

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",*(arr+i)+j);//数组表示法为&arr[i][j]; 
		}
	}
	max=arr[0][0],length=0;width=0;//为了计算最大值标记第一个可能的值作为初始值 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j||i+j==4) 
			{
				sum+=*(*(arr+i)+j);
				if(max<=*(*(arr+i)+j))
				{
					max=*(*(arr+i)+j);
					length=i;
					width=j;
				}
			}
		}			
	}

		printf("和为:%d\t,最大值为%d,它的坐标为%2d,%2d",sum,max,length,width);
		return 0;
}
