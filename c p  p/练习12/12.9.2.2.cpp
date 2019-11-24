#include <stdio.h>
#include"lx.h"
void get_info(){
	if(mode==0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%d",&distance);
			
	}
	else if(1==mode)
	{
		printf("Enter distance traveled in miles:");
		scanf("%d",&distance);
			
	}	 
}
void set_mode(int set)
{
    if (0 == set || 1 == set)
    {
        mode = set;
    }
    else
    {
        printf("Invalid mode specified. Mode %s used.\n", (mode ? "1(US)" : "0(metric)"));
        
    }
}
void show_info()
{ 
	if(0==mode)
	{
		printf("Enter fuel consumed in litters:");
		scanf("%f",&fuel);
		printf("Fuel consumption is %.2f litters per 100 km.",fuel/distance*100);
	}
	else if(1==mode)
	{
		printf("Enter fuel consumed in gallons:");
		scanf("%f",&fuel);
		printf("Fuel consumption is %.2f miles per gallons.",distance/fuel);
	}
}
