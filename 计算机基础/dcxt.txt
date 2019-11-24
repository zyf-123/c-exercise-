#include<stdio.h>
int caidan()
{
	char c[6][30]={"菜单","面食","盖浇饭","凉菜","汤羹","饮料"};
	int i;
	printf("%s\n",c[0]);
	for(i=1;i<=6;i++)
	{
		printf("\t%d.%s",i,c[i]);
	}
	printf("\t0.点餐结束\n");
}
int mian()
{	char c[4][20]={"刀削面","炒面","大盘鸡","鱼加面"};
	int i;
	printf("请具体选择菜品：\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d.%s\n",i+1,c[i]);
	}
	printf("\t0.返回上层菜单\n");
}
int fan()
{	char c[4][50]={"蛋炒饭","鱼香肉丝盖饭","西红柿鸡蛋盖饭","黄焖鸡米饭"};
	int i;
	printf("请具体选择菜品：\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d.%s\n",i+1,c[i]);
	}
	printf("\t0.返回上层菜单\n");
}		
int cai()
{	char c[4][35]={"拍黄瓜","姜汁皮蛋","肉丝苦菊","木耳辣根"};
	int i;
	printf("请具体选择菜品：\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d.%s\n",i+1,c[i]);
	}
	printf("\t0.返回上层菜单\n");
}		
int tang()
{	char c[4][30]={"冬瓜排骨汤","青菜豆腐汤","紫菜蛋花汤","西红柿鸡蛋汤"};
	int i;
	printf("请具体选择菜品：\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d.%s\n",i+1,c[i]);
	}
	printf("\t0.返回上层菜单\n");
}		
int shui()
{	char c[4][30]={"百岁山","雪碧","可乐","果啤"};
	int i;
	printf("请具体选择菜品：\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d.%s\n",i+1,c[i]);
	}
	printf("\t0.返回上层菜单\n");
}		
int main()
{	printf("----------欢迎使用点餐系统----------");
	int M=0;//主类代号
	int m;//子类代号
	int b1[5][4];//单个总价格
	int x[5][4];//每类菜被点的数量
	int t=0;//总价初始为零
	int b[5][4]={{8,8,11,11},{9,12,11,15},{8,15,12,11},{20,15,10,10},{4,4,4,3}};//价格
	char name[5][4][20]={{"刀削面","炒面","大盘鸡","鱼加面"},{"蛋炒饭","鱼香肉丝盖饭","西红柿鸡蛋盖饭","黄焖鸡米饭"},{"拍黄瓜","姜汁皮蛋","肉丝苦菊","木耳辣根"},{"冬瓜排骨汤","青菜豆腐汤","紫菜蛋花汤","西红柿鸡蛋汤"},{"百岁山","雪碧","可乐","果啤"}};

		caidan();
		scanf("%d",&M);
		if(M)
		switch(M)
		{
			case 1:
			{
				mian();
				switch(1)
				{	
					scanf("%d",&m);
					if(m==0)
						break;
				}
				b1[0][m-1]+=b[0][m-1];//菜品总价格
				x[0][m-1]++;//被点次数
			}
			if(m==0) break;
			case 2:
			{
				fan();
				switch(1)
				{	
					scanf("%d",&m);
					if(m==0)
						break;
				}
				b1[1][m-1]+=b[1][m-1];//菜品总价格
				x[1][m-1]++;//被点次数
			}
			if(m==0) break;
			case 3:
			{
				cai();
				switch(1)
				{	
					scanf("%d",&m);
					if(m==0)
						break;
				}
				b1[2][m-1]+=b[2][m-1];//菜品总价格
				x[2][m-1]++;//被点次数
			}
			if(m==0) break;
			case 4:
			{
				tang();
				switch(1)
				{	
					scanf("%d",&m);
					if(m==0)
						break;
				}
				b1[3][m-1]+=b[3][m-1];//菜品总价格
				x[3][m-1]++;//被点次数
			}
			if(m==0) break;
			case 5:
			{
				shui();
				switch(1)
				{	
					scanf("%d",&m);
					if(m==0)
						break;
				}
				b1[4][m-1]+=b[4][m-1];//菜品总价格
				x[4][m-1]++;//被点次数
			}
		}
	}

