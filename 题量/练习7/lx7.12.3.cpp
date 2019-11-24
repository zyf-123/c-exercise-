#include <stdio.h>
int main(void){
	int a,b,c,d;
	a=b=c=d=0;
	int i;
	while((scanf("%d",&i))&&i!=0)
	{
		if(i%2==0)
		{
			a++;
			b=b+i;
		}
		else{
			c++;
			d=d+i;
		}
	}
	printf("偶数：%d，和为%d，平均数%0.2f奇数：%d，和：%d，平均：%0.2f",a,b,float(b/a),c,d,float(d/c));
	return 0;
}
