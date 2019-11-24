#include <stdio.h>
#include <string.h>
	int main (void){
	char a[21]="ABCDEFGHIJKLMNOPQRSTU";
	int b;
	int i; 
	b=strlen(a);
	int c=0;
for(i=1;i<=6;i++){
	int j;
	for(j=0;j<i;j++){
		
			

	   printf("%c",a[c+j]);
		
	}
	c=c+i;
	printf("\n");
}

return 0;
}   
