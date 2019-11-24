#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
struct month
{
    char ab[4];
    int days;
    int num;
}list[12] =
        {
                {"JAN", 31, 1},
                {"FEB", 28, 2},
                {"MAR", 31, 3},
                {"APR", 30, 4},
                {"MAY", 31, 5},
                {"JUN", 30, 6},
                {"JUL", 31, 7},
                {"AUG", 31, 8},
                {"SEP", 30, 9},
                {"OCT", 31, 10},
                {"NOV", 30, 11},
                {"DEC", 31, 12}
        };
 
 
 
int main(void)
{
    int year, month, day, flag = 0;
    char mon[15];
    char mid[4];
    int sum = 0;
    printf("Input the year num:");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        list[1].days = 29;
    }
    printf("Inpur the month:");
    if(scanf("%d", &month) == 1) {}
    else if(scanf("%s", mon) == 1)
    {
        mid[0] = toupper(mon[0]);
        mid[1] = toupper(mon[1]);
        mid[2] = toupper(mon[2]); //！！！！将月份缩写前三个字符给提取出来。俩个数组可以实现，切记。 
        mid[3] = '\0';
        for (int i = 0; i < 12; ++i) {
            if(!strcmp(mid, list[i].ab))
            {
                month = i + 1;
            }
        }
    }
    printf("Input the day:");
    scanf("%d", &day);
    for (int j = 0; j < month - 1; ++j) {
        sum += list[j].days;
    }
    sum += day;
    printf("%d days in all\n", sum);
    return 0;
}
