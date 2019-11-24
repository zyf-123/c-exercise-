#include<stdio.h>
main()
{
int i,j,k,x;
scanf("%d",&x);
for(i=1;i<=x;i++)
{
for(j=1;j<=x-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
for(i=x-1;i>=0;i--)
{
for(j=1;j<=x-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
}
