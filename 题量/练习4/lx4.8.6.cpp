#include<stdio.h>
#include<string.h>
	int main(void){
	char firstname[20];
	char lastname[20];
	printf("������������֣�"); 
	scanf("%s",lastname);
	printf("�����������:");
	scanf("%s",firstname);
	int i=strlen(firstname);
	int j=strlen(lastname);
	printf("%s %s\n",lastname,firstname);
	printf("%*d %*d\n",j,j,i,i);
	printf("%s %s\n",lastname,firstname);
	printf("%-*d %-*d",j,j,i,i);
	
	return 0;
}                                                                      
