#include <stdio.h>
#define onionprice 2.05
#define carrotprice 1.09
#define tiancaiprice 1.15 
int main (void){
	char vegetable;
	int i,j,k,I,J,K,total,zl;
	float sum;
	i=j=k=0;
	while(vegetable!='q')
	{ 
		scanf("%c",&vegetable);	
		switch(vegetable)
		{
			case'a':printf("输入数量：");scanf("%d",&I);
			i=I+i;
			continue; 
			case'b':printf("输入数量：");scanf("%d",&J);
			j=J+j;
			continue; 
			case'c':printf("输入数量：");scanf("%d",&K);
			k=K+k;
			continue; 
			case'q':
			break; 
		}
	}
		zl=i+j+k;
		total=i*onionprice+j*tiancaiprice+k*carrotprice;
		printf("%d\t",total);
		if(total>=100)
		{
			total=total*0.95;
		}
		if(zl<=5)
		sum=total+6.5;
		else if(zl>=5&&zl<20)
		sum=total+14;
		else 
		sum=total+14+(zl-20)*0.5;
		printf("%d\n",total);
		printf("%d\t%d\t%d\n",i,j,k);
		printf("%d",zl);
		printf("%f",sum);
		return 0;
} 
