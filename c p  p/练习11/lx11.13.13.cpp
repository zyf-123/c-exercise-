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
	printf("�������֣�%d",b);
	diandao(b,str); 
}
void diandao(int num,char *str)
{
    char other[100][100];//����һ����ά�����������浥�ʣ�ÿ����ά��Ϊһ�����ʿռ� 
    int i,j=0,k=0;
 
    for(i=0;i<=int(strlen(str));i++)//�ַ����� 
    {
        if(str[i]!=' ')//��Ϊ�ո�ʱ�������µ��ַ��� 
        {
            other[j][k++] = str[i];
        }
        else
        {
            other[j][k]='\0';//Ϊ�ո�ʱ����Ϊ\0.��Ϊ�ַ����Ľ��� 
            k=0;
            j++;//�ڶ�ά�ռ�����1�� 
        }
 
    }
    for(j=num;j>0;j--)//�����ӡ 
    {
        printf("%s",other[j-1]);
        printf(" ");
    }
}
