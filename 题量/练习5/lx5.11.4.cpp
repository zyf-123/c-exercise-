#include <stdio.h>
#define jinzhi "60"
int main(void){
	int i=1;
	printf("�����������ߣ�"); 
	while(i>0)
	{  
	scanf("%d",&i);
	printf("�����%4dcm��%4.2fӢ�硣\n��������룺",i,float(i)/2.54);	
	}
	return 0; 
} 
