#include <stdio.h>
int main(void)
{
	int N,M,K;
	scanf("%d%d%d",&N,&M,&K);
	int a[N][M];
	int b[M][K];
	int c[N][K]; 
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<
		
		M;j++)
		{
			scanf("%d",&a[i][j]); 
		} 
	}
	for(int i=0;i<=M;i++)
	{
		for(int j=0;j<=K;j++)
		{
			scanf("%d",&b[i][j]); 
		} 
	}
		for(int i=0;i<N;i++)
	{
		for(int j=0;j<K;j++)
		{
			c[i][j]=a[i][i]*b[i][j]; 
			printf("%d",c[i][j]); 
		} 
	}
	 
 	return 0;
}

