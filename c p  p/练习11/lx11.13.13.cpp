#include <stdio.h>
#include <ctype.h>
#include <string.h>
void diandao(int num, char *str);
int main(void){
	char *str="wo shi ni De";
	int i=strlen (str);
	int m;
	int b;
	b=1; 
	printf("%d",i);
	for(m=0;m<i;m++)
	{
		if(isspace(str[m]))
			b++;		
	}
	printf("单词数字：%d",b);
	diandao(b,str); 
}
void diandao(int num,char *str)
{
    char other[100][100];//设置一个二维数组用来保存单词，每个二维作为一个单词空间 
    int i,j=0,k=0;
 
    for(i=0;i<=int(strlen(str));i++)//字符总量 
    {
        if(str[i]!=' ')//不为空格时保存至新的字符串 
        {
            other[j][k++] = str[i];
        }
        else
        {
            other[j][k]='\0';//为空格时保存为\0.作为字符串的结束 
            k=0;
            j++;//第二维空间增加1； 
        }
 
    }
    for(j=num;j>0;j--)//倒序打印 
    {
        printf("%s",other[j-1]);
        printf(" ");
    }
}
