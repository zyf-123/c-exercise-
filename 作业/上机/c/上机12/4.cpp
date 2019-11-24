/*
×Ö·û´®ÖÐËÑË÷Ò»¸ö×Ö·û£¬²¢ÇÒÉ¾³ýÇ°ÒÆ
*/ 
#include<stdio.h>
#include <string.h> 
int main(void){
	char  str[100];
	char ch;
	gets(str);
	ch=getchar();
	int length=strlen(str);
	int i,j;
	for(i=0;i<=length;i++)//±éÀú 
	{
	
		if(str[i]==ch)//ÅÐ¶Ï 
		{
			for(j=i+1;j<=length;j++)//×Ö·û´®Ç°ÒÆ 
			{
				
				str[j-1]=str[j];
			}
			str[j-1]='\0';
		} 
	}	

	puts(str);
	return 0;
} 
