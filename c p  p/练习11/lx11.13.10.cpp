#include<stdio.h>
#include<string.h>
#include<ctype.h> 
void remove_space(char *string)
{
    int string_length = strlen(string);
    int m = 0;
	int i; 
    for ( i = 0; i < string_length; i++)
    {
        if (isspace(string[i]))//如果是以下参数时，空格，换行符，换页符，回车，垂直制表，水平指标符返回为真 
        {
            continue;
        }
        string[m++] = string[i];
    }
    string[m] = '\0';


}
int main(void)
{
    char string[256];

    printf("Enter the string:");
    fgets(string, 256,stdin);

    while ('\0' != string[0])
    {
        printf("The original string you entered is ");
        puts(string);

        remove_space(string);
        printf("After remove space, the string is ");
        puts(string);

        printf("Enter the next string:");
        fgets(string, 256,stdin);
    }

    printf("Done and exit!");

    return 0;
}
