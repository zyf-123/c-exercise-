#include <stdio.h>
#include<string.h>
#include<ctype.h> 
int atoi_rewrite(char *string)
{
    int string_length = strlen(string);
    int result = 0;
 
    for (size_t i = 0; i < string_length-1; i++)//因为最后一个字符串时'\0'所以要减1 
    {
        if (!isdigit(string[i]))
        {
            return 0;
        }
        result = result * 10 + (string[i] - '0');
    }

    return result;
}
int main(void)
{
    char string[256];
    int result = 0;

    printf("Enter a integer number:");
    fgets(string, 256,stdin);
    result = atoi_rewrite(string);

    printf("string %s to integer %d\n", string, result);
}
