#include <stdio.h>
#include <string.h>
char *string_in(char *string, char *chr)
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
                return &string[i+1];
                
            }
        }
    }
    return NULL;
    
}
int main (void)
{
    char  string[256];
    char  chr[256];
    char *loc ;

    printf("Enter the string:");
    fgets(string, 256,stdin);

    printf("Enter the string you want to find:");
    fgets(chr, 256,stdin);

    loc = string_in(string, chr);

    if (NULL == loc)
    {
        printf("%s doesn't appear in %s\n", chr, string);
    }
    else
    {
        printf("For %s, it is staring from %p character in %s\n", chr, loc, string);
    }

    
}

