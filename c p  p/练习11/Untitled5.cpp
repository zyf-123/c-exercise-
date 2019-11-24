#include <stdio.h>
#include <string.h>
int strchr1(char *string, char *chr)
{
    int string_length = strlen(string);
    int chr_length = strlen(chr);
    int m = 0;
    int n = 0;

    for (size_t i = 0; i < string_length; i++)
    {
        n = i;
        m = 0;
        while (string[n] == chr[m])
        {
            n++;
            m++;
            if (m >= chr_length-1)
            {
                return i+1;
                break;
            }
        }
    }
    return -1;
    
}
int main (void)
{
    char string[256];
    char chr[256];
    int loc = 0;

    printf("Enter the string:");
    fgets(string, 256,stdin);

    printf("Enter the string you want to find:");
    fgets(chr, 256,stdin);

    loc = strchr1(string, chr);

    if (-1 == loc)
    {
        printf("%s doesn't appear in %s\n", chr, string);
    }
    else
    {
        printf("For %s, it is staring from %d character in %s\n", chr, loc, string);
    }

    
}

