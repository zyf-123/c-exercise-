#include <stdio.h>
int main (void){
	float tall;
	char name[20]; 
	printf("���������������");
	scanf("%s",name);
	printf("������������ߣ���λ�����ף�");
	scanf("%f",&tall);
	tall/=100;
	printf("%s,you are %.2f mils tall",name,tall);
	
	return 0; 
}
