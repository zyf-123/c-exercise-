 #include <stdio.h>
int main(void)
{
 	int i,j;
	int a[10]={2,4,7,8,1,6,5,3,9,0};
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int flag;
				flag=a[j];
				a[j]=a[j+1];
				a[j+1]=flag;/* ����a[j]��a[j+1] 
				   				ð��������ص��ǵ����������������λ�ã�û����һ����ѭ����
								���Խ�����ֵ��������������´ξͲ��ÿ������ˡ�
								���ʱ�临�Ӷ���O��n2��*/	
			}		
		} 
	}  
	for(int i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	 return 0;
}

