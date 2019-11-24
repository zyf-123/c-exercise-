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
    if ((fp = fopen(file_name, "rb")) == NULL) // fopen函数在VS2017中报告会报错，解决办法是在 项目 =》属性 =》c/c++  =》预处理器=》点击预处理器定义，编辑，加入_CRT_SECURE_NO_WARNINGS
    {                                         // scanf_s之类的安全增强函数应该也适用(具体还没有试过)，早知道就百度查一下了，之前使用的都是scanf_s
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
