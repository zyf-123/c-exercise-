#include <stdio.h>
int main(void)
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int a[n][m],b[m][n];
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
/*	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			b[j][n-1]=a[i][j];
		}
	}
	 
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	} */
	
		for( j=0;j<m;j++)
	{
		for( i=n-1;i>=0;i--)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	
 return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
    int a[256][256]={0};
    int b[256][256]={0};
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j <m; ++j) {
            cin>>a[i][j];
        }
    for (int i = 0; i < m; ++i){
        for (int j = 0; j <n; ++j) {
            b[i][j]=a[n-j-1][i];
            j!=n-1?cout<<b[i][j]<<' ':cout<<b[i][j]<<endl;
        }
    }
    return 0;
}
/*��������������������������������
��Ȩ����������ΪCSDN������СС��ɡ����ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/qq_42794826/article/details/88786605
*/

