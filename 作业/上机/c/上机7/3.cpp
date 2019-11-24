#include<stdio.h>
int main(void){
	int x,y,z;
	for(x=0;x<=20;x++)
	{
		for(y=0;y<=33;y++)
		{
			z=100-x-y;
			if(15*x+9*y+z==300)
				printf("%d %d %d\n",x,y,z);	
		} 
	}
} 
