#include <stdio.h>
int main(void){
	int score[10],max,min,i;
	printf("������10�˵ĳɼ�");
	for(i=0;i<=9;i++)
	 	scanf("%d",&score[i]);
		 max=score[0];
		 min=score[0];
		 for(i=1;i<=9;i++)
		 {
		 	if(score[i]>max) max=score[i];
		 	if(score[i]<min) min=score[i];
		 	
		  } 
		  printf("��߷�%d,��ͷ�%d",max,min);
}
