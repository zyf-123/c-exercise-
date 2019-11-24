#include"lx2.h"
#include <stdio.h>

int main(void)
{
    int mode = 0;
    int mode_pre = 0;
    int distance = 0;
    double fuel_consumption;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);

    while (mode >= 0)
    {
        if ((0 != mode) && (1 != mode))
        {
            printf("Invalid mode specified. Mode %s used.\n", (mode_pre ? "1(US)" : "0(metric)"));
            mode = mode_pre;
        }
        get_info(mode, &distance, &fuel_consumption);//第一个第二个同时输入 
        show_info(mode, distance, fuel_consumption);
        mode_pre = mode;
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}
