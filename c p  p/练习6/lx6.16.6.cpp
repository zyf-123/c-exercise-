#include <stdio.h>
int main(void){
	int i;
	printf("������������ޣ�");
	scanf("%d",&i);
	for(int j=1;j<=i;j++)
	{
		printf("%10d%10d%10d\n",i,i*i,i*i*i);
	} 
	return 0;
}
