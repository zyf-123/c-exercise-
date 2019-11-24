#include <stdio.h>
char * b(char * st,int n);
int main(void){
	char * s="hello world i'm chaina.";
	printf("\n%p",b(s,3));
}
char * b(char * st,int n)
{
		char a[n];
		int s=0;
		while(*st!='\0'&&s<n&&*st!=' '&&*st!='\t')
		{
			a[s]=*st;
		
			s++;
			st++;
			if(s>=n)
			break;
		
		}
		
		s=0;
					while(a[s])
		{
			
			printf("%c",a[s]);
			s++;
		}
	
		
		return a;	
		
}
