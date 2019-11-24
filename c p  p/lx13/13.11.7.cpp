#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    FILE *file1, *file2;
    char file_name1[128];
    char file_name2[128];
    char buf1[256] = { 0 };
    char buf2[256] = { 0 };

    printf("Enter the first file name:");
    gets(file_name1);

    printf("Enter the second file name:");
    gets(file_name2);

    if ((file1 = fopen(file_name1, "r")) == NULL)
    {
        printf("Can't open %s\n", file_name1);
    }
    if ((file2 = fopen(file_name2, "r")) == NULL)
    {
        printf("Can't open %s\n", file_name2);
    }

    while ((feof(file1) == 0) || (feof(file2) == 0))
    { 
        if (fgets(buf1, 256, file1) != NULL)
        {
            int length = strlen(buf1);
            // 要实现B情况，添加如下代码
            /*
            if (buf1[length - 1] == '\n')
            {
                buf1[length - 1] = '\0';
            }
            */
            fputs(buf1, stdout);
        }
        if (fgets(buf2, 256, file2) != NULL)
        {
            fputs(buf2, stdout);
        }
    }

    return 0;
}


