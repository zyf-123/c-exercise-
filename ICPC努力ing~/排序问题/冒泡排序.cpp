 #include <stdio.h>
 void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(void)
{
 	int i,j;
	int a[6]={5,2,6,4,10,20};
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			/*	int flag;
				flag=a[j];
				a[j]=a[j+1];
				a[j+1]=flag;/* ����a[j]��a[j+1] 
				   				ð��������ص��ǵ����������������λ�ã�û����һ����ѭ����
								���Խ�����ֵ��������������´ξͲ��ÿ������ˡ�
								���ʱ�临�Ӷ���O��n2��*/	
			}		
		} 
	}  
	for(int i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	 return 0;
}

