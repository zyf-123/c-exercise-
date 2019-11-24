#include <stdio.h>
int main(void){
	int x,max;
	max=0;
	while(1)
	{
		printf("x=");
		scanf("%d",&x); 
		if(x>max)
		{
			max=x;
			printf("当前最大数字是：%d\n(输入-1结束)\n",max);
		}
		else if(x==-1)
		break;
		else
		printf("前最大数字是：%d\n",max); 
	}
	}
