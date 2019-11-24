#include<stdio.h>
#include <time.h>
 #include<stdlib.h>
#include"lx7.h"
int  main(void)
{
    int sets = 0;
    int sides = 0;
    int dice = 0;
    int total = 0;

    while (1)
    {
        printf("Enter the number of sets; enter q to stop: ");
        if (1 != scanf("%d", &sets))
        {
            break;
        }

        printf("How many sides and how many dice? ");
        scanf("%d %d", &sides, &dice);

        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for (int i = 0; i < sets; i++)
        {
            if ((i + 1) % 15 == 0)
            {
                printf("\n");
            }
            printf("%d ", roll_n_dice(dice, sides));
        }
        printf("\n");
    }

    printf("Done.\n");

    return 0;

}
