#include <stdio.h>
int main(void){
	int i,j;
	printf("������������ó�����\n");
	scanf("%d",&i);
	printf("��������ĵ�һ�α�������\n");
	scanf("%d",&j);
	while(j>0)
	{  
	printf("%d",j%i);
	printf("������������ı�������"); 
	scanf("%d",&i);
	}
	return 0; 
} 
