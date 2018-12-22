#include<stdio.h>
int main()
{
	long long n,tmp,g;
	scanf("%lld",&n);
	while ((n/10) != 0)
	{
		g = 0;
		tmp = n;
		while (tmp != 0)
		{
			g += tmp % 10;
			tmp /= 10;
		}
		n = g;
	}
	printf("%lld\n",g);
} 
