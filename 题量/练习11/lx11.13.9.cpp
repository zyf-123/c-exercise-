#include <stdio.h>
#include<string.h>
char * diandao (char * str1)
{
	int string_length = strlen(str1);
    for (size_t i = 0; i < string_length / 2; i++)
    {
        char ch = str1[i];
        str1[i] = str1[string_length - i - 1];
        str1[string_length - i - 1] = ch;
        
}
return str1;
}
int main(void)
{
	char string1[20];
	fgets(string1,20,stdin);	

	printf("%s",diandao(string1));
	
}
