#include <stdio.h>
#include <stdlib.h>
main ()
{
	
    FILE *fp1;
    FILE *fp2;
    char *file1 = "1.txt";
    char *file2 = "2.txt";
    int ch = 0;

    if ((fp1 = fopen(file1, "rb")) == NULL)
    {
        printf("Can't open %s\n", file1);
    }
    if ((fp2 = fopen(file2, "wb")) == NULL)
    {
        printf("Can't open %s\n", file2);
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);;
    }

    fclose(fp1);
    fclose(fp2);


}

