#include <stdio.h>
#include <string.h>
#include <ctype.h>
int  shuzi(char * a,int );
int zimu(char * a,int );
int main(void){
	char a[80];
	gets(a);
	int l=strlen(a);
	printf("%d   %d  %d",zimu(a,l),shuzi(a,l),l-zimu(a,l)-shuzi(a,l));
} 
int  zimu(char * a,int l)
{
	int i,sum=0;


	for(i=0;i<l;i++)
	{ 
		sum+=isalpha(toupper(a[i]));
	}
	return sum;
 } 
 int  shuzi(char * a,int l)
{
	int i,sum=0;


	for(i=0;i<l;i++)
	{ 
		sum+=isdigit(a[i]);
	}
	return sum;
 } 
 
