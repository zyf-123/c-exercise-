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
			printf("��ǰ��������ǣ�%d\n(����-1����)\n",max);
		}
		else if(x==-1)
		break;
		else
		printf("ǰ��������ǣ�%d\n",max); 
	}
	}
