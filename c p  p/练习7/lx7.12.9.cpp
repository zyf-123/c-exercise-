 #include <stdio.h>
 #include <math.h>
 int main (void){
 
   int input = 0;

    printf("please input the upper number:");
    scanf("%d", &input);

    int i = 0;
    int j = 0;
    int k=0;



        for (j = 2; j < sqrt((double)i); j++)
        {
            if (i % j == 0)
            {
                while(1)
				{
					k=input/2;
					printf("%d",k);
					if(k==3)
					{
					printf("%d*=%d",3,input);
					break;
					}
					else
					continue;
					break;	
				}
            }
        }
        if (j > sqrt(i))
        {
            printf("sushu");
        }

    return 0;
}

