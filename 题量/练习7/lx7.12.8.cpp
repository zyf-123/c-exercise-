#include <stdio.h>
int main (void){
	int i=0;
	int j=0;
	int k=0;
	int a=0;
	float desired=0.0;
	printf("\t\t***************************************************************************\n\n");
	printf("		Enter the number corresponding to the desired pay rate or action \n");
	printf("		1)$8.75\t\t		    2)$9.33\n");
	printf("		3)$10.00\t\t	    3)$11.20\n");
	printf("		5)quit\n\n");
	printf("\t\t***************************************************************************\n");
	while(1)
	{
	printf("������Ա�����ʵȼ���");
	scanf("%d",&a);
	switch(a){
	case 1:desired=8.75;
	break; 
	case 2:desired =9.33;
	break;
	case(3):desired=10.00;
	break;
	case(4):desired=11.20;
	break;
	case(5):break;
	default:
	printf("����������ȼ���1~5\n");
	continue;
	}
	break;
}
	printf("�������Ա���Ĺ���������");
	 
	scanf("%d",&i); 
		if(i<40)
		j=desired*40;
		else
		j=((i-40)*1.5+40)*desired;
		if(j>=450)	
		k=(j-450)*0.25+300*0.15+150*0.2; 
		else if(j<450)
		k=(j-300)*0.2+300*0.15;
		else
		k=j*0.15;
	printf("�����ǣ�%d,˰��%d,���룺%d",j,k,j-k);
	return 0;
}
