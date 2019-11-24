#include <stdio.h>
#include <string.h>
int strchr1(char s, char *chr);
int strchr1(char s, char *chr)
{
    int chr_length = strlen(chr);
    int n = 0;

    for ( n; n < chr_length; n++)
    {
        
        if (s == chr[n])
        {
            
                return 1;
        }
    }
    return 0;
    
}


int main (void){
	
	char str;
    char chr[256];
    int loc = 0;
    
    printf("Enter the string you want to find:");
    fgets(chr, 256,stdin);

    printf("Enter the letter:");
    str=getchar();

    

    loc = strchr1(str, chr);

    if (0 == loc)
    {
        printf("%cdoesn't appear in %s\n", str, chr);
    }
    else
    {
        printf("For %c, it is find for character in %s\n", str, chr);
    }

    
}
