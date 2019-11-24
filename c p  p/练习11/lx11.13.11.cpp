#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void print_string(char *string[10], int string_amount)
{
	int i;
    for ( i = 0; i < string_amount; i++)
    {
        printf("%d:",i);
        puts(string[i]);
    }

}
void print_original_string(char string[][256], int string_amount)
{ 
    static char *string_ori[10];  // 本质数组，存储十个指向char的指针
    static bool sort = 0;      //记录是否已经处理过，没必要每次都处理吧

    if (sort != 1)
    {
        for (size_t i = 0; i < string_amount; i++)
        {
            string_ori[i] = string[i];
        }

        sort = 1;
    }

    printf("Now print the original string:\n"); 
    print_string(string_ori, string_amount);
}
void print_string_by_ascii(char string[][256], int string_amount)
{
    static char *string_ascii[10]; // 本质数组，存储十个指向char的指针
    static bool sort = 0;  //记录是否已经处理过，没必要每次都处理吧

    if (sort != 1)
    {
        for (size_t i = 0; i < string_amount; i++)
        {
            string_ascii[i] = string[i];
        }

        for (size_t i = 0; i < string_amount; i++)
        {
            for (size_t j = i + 1; j < string_amount; j++)
            {
                int result = strcmp(string_ascii[i], string_ascii[j]);
                if (result > 0)
                {
                    char *tmp = string_ascii[j];
                    string_ascii[j] = string_ascii[i];
                    string_ascii[i] = tmp;
                }
            }
        }

        sort = 1;
    }

    printf("Now print the string sorted by ascii:\n");
    print_string(string_ascii, string_amount);
}
void print_string_by_length(char string[][256], int string_amount)
{
    static char *string_length[10];
    static bool sort = 0;

    if (sort != 1)
    {
        for (size_t i = 0; i < string_amount; i++)
        {
            string_length[i] = string[i];
        }

        for (size_t i = 0; i < string_amount; i++)
        {
            for (size_t j = i + 1; j < string_amount; j++)
            {
                if (strlen(string_length[i]) < strlen(string_length[j]))
                {
                    char *tmp = string_length[i];
                    string_length[i] = string_length[j];
                    string_length[j] = tmp;
                }
            }
        }

        sort = 1;
    }

    printf("Now print the string sorted by string length:\n");
    print_string(string_length, string_amount);
}
int check_first_word_length(char *string)
{
    int result = 0;
    int string_lenght = strlen(string);

    for (size_t i = 0; i < string_lenght; i++)
    {
        if (isspace(string[i]))
        {
            return i;
        }
    }
    return string_lenght;
}
void print_string_by_first_word_length(char string[][256], int string_amount)
{
    static char *string_first_word_length[10];
    static bool sort = 0;

    if (sort != 1)
    {
        for (size_t i = 0; i < string_amount; i++)
        {
            string_first_word_length[i] = string[i];
        }

        for (size_t i = 0; i < string_amount; i++)
        {
            for (size_t j = i + 1; j < string_amount; j++)
            {
                if (check_first_word_length(string_first_word_length[i]) < check_first_word_length(string_first_word_length[j]))
                {
                    char *tmp = string_first_word_length[i];
                    string_first_word_length[i] = string_first_word_length[j];
                    string_first_word_length[j] = tmp;
                }
            }
        }

        sort = 1;
    }

    printf("Now print the string sorted by first word length:\n");
    print_string(string_first_word_length, string_amount);
}
int main(void)
{
    char string[10][256];
    char choice = 0;
    int string_amount = 0;

    printf("You can enter up to ten strings:\n");
    for (size_t i = 0; i < 10; i++)
    {
        fgets(string[i], 256,stdin);
        if (string[i][0] == '\0')
        {
            break;
        }
        string_amount++;
    }

    do
    {
        printf("Menu:\n");
        printf("%-50s%-50s\n%-50s%-50s\n%-50s\n", "a) print original string", "b) print string sorted by ascii", "c) print string sorted by string length",
            "d) print string sorted by first word length", "q) quit");
        printf("Now enter your choice: ");

        choice = getchar();
        getchar();

        switch (choice)
        {
        case 'a':
            print_original_string(string, string_amount);
            break;

        case 'b':
            print_string_by_ascii(string, string_amount);
            break;

        case 'c':
            print_string_by_length(string, string_amount);
            break;

        case 'd':
            print_string_by_first_word_length(string, string_amount);
            break;

        case 'q':
            printf("Done and quit!\n");
            

        default:
            printf("Unkonw command, enter again!\n");
            break;
        }
    } while (1);

}

