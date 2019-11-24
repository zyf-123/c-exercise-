#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL  40
#define MAXAUTL  40
#define MAXBKS 100    /* �鼮��������� */
 
char * s_gets(char * st, int n);

struct book           /* ���� book ģ��  */
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
 
int (* funcp)(const void*, const void*);
 
int sortByAscii(const void* a, const void* b)//��ʽҪ����qsort����������ת��
{
    if(strcmp(((struct book*)a)->title, ((struct book*)b)->title) > 0)
    {
        return 0;
    }
    return 1;
}
 
int sortByPrice(const void* a,const void* b)
{
    if(((struct book*)a)->value < ((struct book*)b)->value)
    {
        return 0;
    }
    return 1;
}
 
int main(void)
{
    struct book library[MAXBKS];  /* book ���ͽṹ������ */
    int count = 0;
    int index;
    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;   /* ����������*/
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,library[index].author, library[index].value);
        printf("Here is the list sorted by ASCII of your books:\n");
        funcp = sortByAscii;
        qsort(library, count == MAXBKS ? MAXBKS - 1 : count, sizeof(library[0]), funcp);//�ڶ�������Ӧ�������鵱ǰд�������ݳ��ȣ���Ȼ����һ������
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,library[index].author, library[index].value);
        printf("Here is the list sorted by price of your books:\n");
        funcp = sortByPrice;
        qsort(library, count == MAXBKS ? MAXBKS - 1 : count, sizeof(library[0]), funcp);
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,library[index].author, library[index].value);
    }
    else
        printf("No books? Too bad.\n");
    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    // ���һ��з�
        if (find)                   // �����ַ���� NULL��
            *find = '\0';           // �ڴ˴�����һ�����ַ�
        else while (getchar() != '\n')
            continue;               // ������������ʣ����ַ�
    }
    return ret_val;
}
