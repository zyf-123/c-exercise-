#include <stdio.h>
int main()
{
	int i,j,sum=0,max,length,width;
	int arr[5][5];

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",*(arr+i)+j);//�����ʾ��Ϊ&arr[i][j]; 
		}
	}
	max=arr[0][0],length=0;width=0;//Ϊ�˼������ֵ��ǵ�һ�����ܵ�ֵ��Ϊ��ʼֵ 
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

		printf("��Ϊ:%d\t,���ֵΪ%d,��������Ϊ%2d,%2d",sum,max,length,width);
		return 0;
}
