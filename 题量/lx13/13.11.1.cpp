#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char file_name[256];

    printf("Enter the file name: ");
    gets(file_name);
	printf("%s",file_name);
    if ((fp = fopen(file_name, "rb")) == NULL) // fopen������VS2017�б���ᱨ������취���� ��Ŀ =������ =��c/c++  =��Ԥ������=�����Ԥ���������壬�༭������_CRT_SECURE_NO_WARNINGS
    {                                         // scanf_s֮��İ�ȫ��ǿ����Ӧ��Ҳ����(���廹û���Թ�)����֪���ͰٶȲ�һ���ˣ�֮ǰʹ�õĶ���scanf_s
        printf("Can't not open %s\n", file_name);
    }
    fread(file_name,sizeof(double),2,fp) ;

	fp = fopen("1.txt", "rb");
    while ((ch = getc(fp)) != EOF)
    {
    //	printf("%d",ch);
        putc(ch, stdout);
        
        count++;
    } 
    fclose(fp);
    printf("\n\nFile %s has %lu characters\n", file_name, count);
getchar();
    return 0;
}
