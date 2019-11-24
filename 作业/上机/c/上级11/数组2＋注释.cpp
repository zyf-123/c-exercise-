#include <stdio.h>
int main()
{
	int i,j,sum=0,max,length,width;
	int arr[5][5];

	for(i=0;i<5;i++)//该块用来输入5*5数组的各个值 
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]); 
		}
	}
	max=arr[0][0],length=0;width=0;//为了计算最大值标记第一个可能的值作为初始值，并且计算该值的坐标给length和width 
	for(i=0;i<5;i++)//该块用来进行遍历数组每个数字 
	{
		for(j=0;j<5;j++)
		{
			if(i==j||i+j==4) //判断条件符合对角线 
			{
				sum+=arr[i][j];//对角线的值进行相加 
				if(max<=arr[i][j])//用来寻找最大值，并且不断更改，并且记录坐标 
				{
					max=arr[i][j];
					length=i;
					width=j;
				}
			}
		}			
	}

		printf("和为:%d\t,最大值为%d[%d][%d]",sum,max,length,width);
		return 0;
}//算法时间复杂度为o(n2)+o(n)= o(n2)； 
