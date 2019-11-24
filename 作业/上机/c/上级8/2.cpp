#include <stdio.h>
int main(void){
	int x,y,z;
	for(x=1;x<=9;x++)
	{
		for(y=1;y<=12;y++)
		{
			z=36-x-y;
			if(x+y+z==36&&4*x+3*y+z/2==36&&z%2==0)
				printf("%d\t%d\t%d\n",x,y,z);
		}
	}
}
