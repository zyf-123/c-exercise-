#include <stdio.h>
int main(void){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{10,11,12},{13,14,15},{16,17,18}};
	int c[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	 } 
	 	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		printf("%5d",c[i][j]);
	}
	} 
	 
	 
} 
