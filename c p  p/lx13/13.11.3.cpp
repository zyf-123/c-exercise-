#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) 
 {
 char file_name[256];
    char *tmp_file = "2.txt";  // 现在只能想到把读出来的数据保存到一个缓存文件里，然后再从缓存文件度回，暂时没想到同时读取修改同一个文件的方法
    int ch = 0;
    FILE *fp_r;
    FILE *fp_w;

    printf("Enter the file name: ");
    gets(file_name);

    if ((fp_r = fopen(file_name, "r+")) == NULL)
    {
        printf("Can't open %s as read mode!\n", file_name);
    }

    if ((fp_w = fopen(tmp_file, "w")) == NULL)
    {
        printf("Can't open %s as write mode!\n", tmp_file);
    }

    while ((ch = fgetc(fp_r)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp_w);

    }

    fclose(fp_r);
    fclose(fp_w);

    if ((fp_r = fopen(tmp_file, "r")) == NULL)
    {
        printf("Can't open %s as read!\n", tmp_file);
    }
    if ((fp_w = fopen(file_name, "w")) == NULL)
    {
        printf("Can't open %s as write!\n", file_name);
    }
    while ((ch = fgetc(fp_r)) != EOF)
    {
        fputc(ch, fp_w);
    }

    fclose(fp_r);
    fclose(fp_w);
    //remove(tmp_file);

    printf("Done.\n");

    
}
