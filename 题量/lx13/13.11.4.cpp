#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char buf[256] = { 0 };
    for (int i = 1; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "rb")) == NULL)
        {
            printf("Can't open file %s as read!\n", argv[i]);
        }

        printf("%s:\n", argv[i]);
        while (fgets(buf, 256, fp) != NULL)
        {
            fputs(buf, stdout);
        }

        printf("\n");
    }

    printf("Done!\n");

    return 0;
}
