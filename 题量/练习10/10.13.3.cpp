int a(int a[],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	return max;
}
#include <stdio.h>
int main(void){
	int max;
	int b[5]={1,2,3,4,15};
	max=a(b,sizeof(b)/sizeof(b[0]));
	printf("%d",max);
	return 0;
}
