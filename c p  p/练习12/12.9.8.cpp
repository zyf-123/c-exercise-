#include <stdio.h>
#include <stdlib.h>
#include "lx8.h"
int *make_array(int elem,int val);
void show_array(const int ar [],int n);
int main(void)
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            printf("Free memory!\n");
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }

    printf("Done.\n");
    return  0;
}
