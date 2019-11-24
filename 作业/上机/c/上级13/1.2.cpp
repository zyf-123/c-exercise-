#include <stdio.h>
int main(void){
	int a=12,b=5,*t;
	int *p1=&a,*p2=&b;
	printf("%d    %d\n",*p1,*p2);
	t=p1;p1=p2;p2=t;
	printf("%d    %d\n",*p1,*p2);
	printf("%d  %d\n",a,b);
	return 0;
}
