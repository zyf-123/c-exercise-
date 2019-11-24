#include <stdio.h>
#include <stdlib.h>
int *make_array(int elem,int val)
{
	int *a;
	a=(int *)malloc (elem*sizeof(int));
	for(int i=0;i<elem;i++)
	{
		a[i]=val;
	}
	return a;
 } 
 void show_array(const int ar [],int n)
 {
 	for(int i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
	free(a);
 }
