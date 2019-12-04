#include <stdio.h>
#include<math.h>
int main(void)
{	int i=5,j,k,count=2;
 	while(i)
 	{
 		j=sqrt(i);
 		for(k=2;k<=j;k++)
 		{
 			if(i%k==0)
			{
				break;
			}		
		}
		if(k>j)
		{
			count++;
			//printf("%5d",i);
			if(count==2019)
 			{
 				printf("%d",i);
 				break;
			 }
		} 
		i++;
	}
	
	 return 0;
}

