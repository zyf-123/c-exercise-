#include <stdio.h>
int ans[100];//该数组具有文件作用域 
int main(void){
	for(int i=0;i<18;i++)//该块具有限制输入次数为18的情况    记录牌 
	{//i具有块作用域 
		int t;
		scanf("%d",t);// 
		ans[t]++;//数组的每一个下标用来储存相应数字所出现的次数。输入2的话，则a【2】+1； 
	}
	for(int i=1;i<=13;i++)//0是鬼牌，所以不计入规则； 并且牌数只有13，所以<=13  进行运算 
	{
		if(ans[i]>=2)//该判断巧妙的解决了鬼牌的计算问题。只将鬼牌数量为3的时候进行保存，小于2为1；等于4和2为0； 
		{
			if(ans[i]!=3)
			{
				ans[i]=0;
			}
		} 
		else
			ans[i]=1;
	}
	int sum=0;//sum具有块作用域 
	for(int i=0;i<=13;i++)//求和运算。 
	{
		sum=sum+ans[i];
	 } 
	 printf("%d",sum);
	 return 0;
	  
}  
