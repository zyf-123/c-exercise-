#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int  main(void)
{
    int word;
    char **words;
    char word_tmp[256];

    printf("How many words do you wish to enter? ");
    scanf("%d", &word);

    words= (char **)malloc(sizeof(char *) * word);

    printf("Enter %d words now:\n", word);
    for (int i = 0; i<word; i++)
    {
        scanf("%s",word_tmp);
        int word_length = strlen(word_tmp);
        words[i] = (char *)malloc(word_length+1);
        strncpy(words[i], word_tmp, word_length+1);
    }

    printf("Here are your words:\n");
    for (int i = 0; i < word; i++)
    {
        printf("%s\n", words[i]);
    }

    // 别忘记释放内存
    for (int i = 0; i < word; i++)
    {
        free(words[i]);
    }
    free(words);
    return 0;
}
