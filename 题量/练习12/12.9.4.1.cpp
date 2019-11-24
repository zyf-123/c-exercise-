#include<stdio.h>
extern int times;
int  ceshi(void);
int  main(void){
	int i;        
	for(i=1;i<=36;i++)
	{
		ceshi();
			
	}
	printf("%d",times);
	return 0;
}

