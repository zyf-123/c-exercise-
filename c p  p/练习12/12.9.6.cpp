#include<stdio.h>
#include <time.h>
#include"lx5.h"
int rollme (void);
	int a[10];

int main(void){
	
	srand((unsigned int )time(0));//Ëæ»úÖÖ×Ó 
	for(int i=0;i<100;i++)
	{
		int j;
		j=rollme();
		a[j-1]++;
	}
	
	for(int i=0;i<10;i++)
	{
	
		printf("%3d",a[i]);
	}
	return 0;
}

