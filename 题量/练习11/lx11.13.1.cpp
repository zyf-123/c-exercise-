#include <stdio.h>
char * b(char * st,int n);
int main(void){
	char * s="wo zhi dao.";
	

	printf("\n%p",b(s,6));
}
char * b(char * st,int n)
{
		char a[n];
		int s=0;
		while(*st!='\0')
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
