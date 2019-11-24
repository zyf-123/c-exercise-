#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ceshi(int argc, char **argv)
{
    char string[256];
    int string_length = 0;
	int i;
    printf("Enter the string:");
    fgets(string, 256,stdin);
    string_length = strlen(string);

    if (strcmp("-p", argv[1]) == 0 || argc == 1)
    {
        printf("Original string: ");
        puts(string);
    }
    else if (strcmp("-u", argv[1]) == 0)
    {
        printf("Upper string:");
        for (i = 0; i < string_length; i++)
        {string[i]=toupper(string[i]);
          
        }
          puts(string);
        printf("\n");
    }
    else if (strcmp("-l", argv[1]) == 0)
    {
        printf("Lower string: ");
        for (i = 0; i < string_length; i++)
        {string[i]=tolower(string[i]);
        
        }
          puts(string);
        printf("\n");
    }

}


int main(int argc, char **argv)
{
 
    ceshi(argc, argv);

    while (getchar());

    return 0;
}
