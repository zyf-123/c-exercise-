#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	char *str="wo shi ni De.";
	int i=strlen (str);
	int m;
	int z,x,c,v,b;
	z=x=c=v=b=0;
	printf("%d",i);
	for(m=0;m<i;m++)
	{
		if(islower(str[m]))
			z++;
		if(isupper(str[m]))
			x++;
		if(isdigit(str[m]))
			c++;
		if(ispunct(str[m]))
			v++;
		if(isblank(str[m]))
			b++;		
	}
	printf("大写字母数：%d小写字母数：%d数字字符数：%d标点数：%d单词数字：%d",z,x,c,v,b);
}
