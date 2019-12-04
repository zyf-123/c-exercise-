#include <stdio.h>
int main(void)
{
	int i=1,k=0;
	for(k=1;k<9999;k++)
	{
		i=k; 
		if(i%5==1)
		{
			i=i/5*4;
			if(i%5==2)
			{
				i=i/5*4;
				if(i%5==3)
				{
					i=i/5*4;
					if(i%5==4)
					{
						i=i/5*4;
						if(i%5==0)
							printf("%d\n",k);
					}
				}
			}
		}
	}

	 return 0;
}

