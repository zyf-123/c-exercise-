#include <stdio.h>
/*
int Max2(int a,int b)
{

		if (a > b)
		{
			return a;
		}
		else
		{
			return b;
		}


}


int Max3(int a, int b, int c)
{
	int d = Max2(a, b);
	int e = Max2(c, d);
	return e;
}
//1+2+3+...+100*/
//int Sum()
//{
//	int tmp = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		tmp += i;
//	}
//	printf("%d\n", tmp);
//	return 0;
//}
/*int Number(int c)
{

	if (c% 3 == 0 ||c%5 == 0)
	{
		printf("%d\n", 1);
	}
	else
	{
		printf("%d\n", 2);
	}
	return 0;
	
}*/
//bool isPrime(int n)
//{
//	if (n=100,n<=200,n++)
//		
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			break;
//	9	}
//	}
//	
//}
int gcd1(int m,int n)
{
	int temp;
	if(m == 0 || n ==0)
	{
		printf("0没有最大公约数");
		return 0; 
	 } 
   while (m%n !=0 )
	{
		if(m/n==0)
		{
			temp=m;
			m=n;
			n=temp;
			
		}
		else
		{
			n=m%n;
			
		}
	}
	return n;
	
/*	
	int tmp;
	if (m == 0 || n == 0)
		return 0;
	
	if (m < n)
	{
		tmp = m; m = n; n = tmp;
	}
	while(m%n != 0);
	{
		m/n
		tmp=m;
		m = n;
		n = tmp;
	}
	return m;
	*/
}

int main()
{
	//Max();
	//Max2(100, 23);
	//int n = Max3(100, 23, 45);
	//Sum();
	//Number(25);
	//isPrime();
	printf("%d",gcd1(0,0));
}
