#include <stdio.h>
int main()
{
	int i,j,sum=0,max,length,width;
	int arr[5][5];

	for(i=0;i<5;i++)//�ÿ���������5*5����ĸ���ֵ 
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]); 
		}
	}
	max=arr[0][0],length=0;width=0;//Ϊ�˼������ֵ��ǵ�һ�����ܵ�ֵ��Ϊ��ʼֵ�����Ҽ����ֵ�������length��width 
	for(i=0;i<5;i++)//�ÿ��������б�������ÿ������ 
	{
		for(j=0;j<5;j++)
		{
			if(i==j||i+j==4) //�ж��������϶Խ��� 
			{
				sum+=arr[i][j];//�Խ��ߵ�ֵ������� 
				if(max<=arr[i][j])//����Ѱ�����ֵ�����Ҳ��ϸ��ģ����Ҽ�¼���� 
				{
					max=arr[i][j];
					length=i;
					width=j;
				}
			}
		}			
	}

		printf("��Ϊ:%d\t,���ֵΪ%d[%d][%d]",sum,max,length,width);
		return 0;
}//�㷨ʱ�临�Ӷ�Ϊo(n2)+o(n)= o(n2)�� 
