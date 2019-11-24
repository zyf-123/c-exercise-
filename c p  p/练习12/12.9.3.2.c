#include <stdio.h>
void get_info(int mode, int * distance, double * fuel_comsuption)
{
    if (0 == mode)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%d", distance);

        printf("Enter fuel comsumed in liters: ");
        scanf("%lf", fuel_comsuption);
    }
    else if (1 == mode)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%d", distance);

        printf("Enter fuel comsumed in gallons: ");
        scanf("%lf", fuel_comsuption);
    }

    
}
void show_info(int mode, int distance, double fuel_consume)
{
    if (0 == mode)
    {
        printf("Fuel comsumption is %lf liters per 100 km\n", (fuel_consume / (distance / 100)));
    }
    else if (1 == mode)
    {
        printf("Fuel comsuption is %lf miles per gallon.\n", distance / fuel_consume);
    }
}
