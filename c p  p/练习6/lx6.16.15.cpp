#include <stdio.h>
int main (void){
   int i = -1;
    char input[255];

    printf("Please input the string:");

    do
    {
        i++;
        scanf("%c", &input[i]);
    } while (input[i] != '\n');

    for (int j = i; j > 0; j--)
    {
        printf("%c", input[j - 1]);
    }
    printf("\n");
	return 0;
}
