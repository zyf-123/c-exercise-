#include <stdio.h>
int mian (void){
	signed long long item = 0;
    double result1 = 0.0;
    double result2 = 0.0;

    printf("Please input the item you want to check:");
    scanf("%lld", &item);
    getchar();

    while (item > 0)
    {
        result1 = 0.0; 
        result2 = 0.0;
        for (int  i = 1; i <= item; i++)
        {
            result1 += 1.0 / i;
            if (i % 2 == 1)
            {
                result2 += 1.0 / i;
            }
            else
            {
                result2 -= 1.0 / i;
            }
        }
        printf("the %d item result of the first sequence was %lf\n", item, result1);
        printf("the %d item result of the second sequence was %lf\n", item, result2);

        printf("Please anthor input the item you want to check:");
        scanf("%d", &item);
        getchar();
    }

    printf("Done\n");
	return 0;
} 
