#include <stdio.h>
int  critic(void)
{
    int units;
    printf("No luck, my friend, Try again.\n");
    scanf("%d", &units);
	return units;
}
int main(void)
{
    int units;

    printf("How many pounds to firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
    {
        units=critic();
    }
    printf("You must have looked it up!\n");

    return 0;
}
