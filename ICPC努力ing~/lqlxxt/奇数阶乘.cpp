#include<stdio.h>
main(){
	double arr[150];
	double sum=1.0;
	int i,j;
	scanf("%d",&i);
	for(j=i;j>0;j--)
	{
		for(int k=j;k>0;k--)
		{
			sum=sum*k;
		}
		arr[j]=sum;
		sum=1;
	}
	sum=0;
	for(i;i>0;i--)
	{
		 
		printf("%d 的值是%e\n",i,arr[i]);
		if(i%2!=0)
		sum+=arr[i];
	} 
	printf("总合是%e",sum);

}
