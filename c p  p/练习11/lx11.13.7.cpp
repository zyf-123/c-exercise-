#include<stdio.h>
#include <string.h> 
char *mystrncpy(char *s1, char *s2, int n)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int copy_length = (s2_length >= n ? n : s2_length);

    for (size_t i = 0; i < copy_length; i++)
    {
        s1[s1_length + i] = s2[i];
    }

    if (s2_length < n)
    {
        s1[s1_length + s2_length] = '\0';
    }

    return s1;
}
int main(void)
{
    char string1[256];
    char string2[256];
    int string1_length = 0;
    int string2_length = 0;

    while (1)
    {
        printf("Enter the first string:");
        fgets(string1, 256,stdin);

        printf("Enter the second string:");
        fgets(string2, 256,stdin);

        string1_length = strlen(string1);
        string2_length = strlen(string2);

        printf("The first original string: ");
        puts(string1);
        mystrncpy(string1, string2, (256 - string1_length));
        printf("After mystrncpy, ths first string: ");
        puts(string1);
    }

    return 0;
}
