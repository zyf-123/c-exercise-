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
				a[j+1]=flag;/* 交换a[j]和a[j+1] 
				   				冒泡排序的特点是调整相邻两个对象的位置，没进行一次内循环，
								可以将最大的值调整到最后，这样下次就不用考虑它了。
								因此时间复杂度是O（n2）*/	
			}		
		} 
	}  
	for(int i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	 return 0;
}

