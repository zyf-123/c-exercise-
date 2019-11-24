 #include <stdio.h>
 int main (void){
 
    char ch = 0;
    int n_char = 0;
    while ((ch = getchar()) != EOF)
    {
        n_char++;
        if (ch < ' ')
        {
            if ('\t' == ch)
            {
                putchar('\\');
                putchar('t');
                printf(":%d ", ch);
            }
            else if ('\n' == ch)
            {
                putchar('\\');
                putchar('n');
                printf(":%d ", ch);
            }
            else
            {
                putchar('^');
                putchar(ch+64);
                printf(":%d ", ch);
            }
        }
        else
        {
            putchar(ch);
            printf(":%d ", ch);
        }
        if (n_char % 10 == 0)
        {
            printf("\n");
        }

    }
}
