#include <stdio.h>
int main(void){
	int i,x,y,z,sum;
	printf("������һ��3λ����");
	scanf("%d",&i);
	x=i/10/10%10;
	y=i/10%10;
	z=i%10;
	sum=x+y+z;
	printf("%d",z);
	printf("%d",sum);
	return 0;
}
