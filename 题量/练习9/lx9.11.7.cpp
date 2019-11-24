#include<stdio.h>
int tongji(char x); 
int main (void){
	char i;
	while ((i=getchar())!='#')
	{
		if(i=='\n')
		continue;
		if(tongji(i)==-1)
			printf("ÇëÖØÐÂÊäÈë");
		else
			printf("%c%3d",i,tongji(i)); 
	}
}
int tongji (char x)
{
	if((x>64&&x<91)||(x>96&&x<123))
	return x;
	else
	return -1;
}
