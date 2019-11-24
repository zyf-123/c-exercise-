#include <stdio.h>
int main (void){
	int i=0;
	int j=0;
	int k=0;
	char a=0;
	float desired=0.0;
	printf("\t\t***************************************************************************\n\n");
	printf("		Enter the number corresponding to the desired pay rate or action \n");
	printf("		a)add\t\t		    b)subract\n");
	printf("		c)mulitply\t\t	    d)divide\n");
	printf("		q)quit\n\n");
	printf("\t\t***************************************************************************\n");
	while(1)
	{
	printf("请输入你所需要的功能：");
	while((a=getchar())=='\n')
	continue;
	switch(a){
	case 'a':scanf("%d%d",&i,&j);
	k=i+j;
	printf("%d",k); 
	break; 
	case 'b':scanf("%d%d",&i,&j);
	k=i-j;
	printf("%d",k); 
	break;
	case'c':scanf("%d%d",&i,&j);
	k=i*j;
	printf("%d",k); 
	break;
	case'd':scanf("%d%d",&i,&j);
	
	k=i/j;
	printf("%d",k); 
	break;
	case'q':break;
	default:
	printf("输入数值不符合现有功能：\n");
	 
	continue;
	}
	break;
}
return 0;
}
