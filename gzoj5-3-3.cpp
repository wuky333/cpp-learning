#include<stdio.h>
int isPrime(long mun);
int main()
{
	int L,R,m = 0,n;
	scanf("%d%d",&L,&R);
	for (int i = L;i <= R;i++)
	{
		int tmp = 0;
		int sum = 0;
		n = i;
		while ((n != 0)&&(i % 2 == 1))
		{
			tmp = n % 10;
			sum += tmp;
			n /= 10;
		} 
		if ((sum == 10)&&(isPrime(i) == 1)) m = i;
		if (m != 0)
		{
			printf("%d\n",m);
			break;
		}
	}
	if (m == 0) printf("no");
	return 0;
}

int isPrime(long num)
{
	int isPrime = 1;
	for(long j=2;j<=num/2;j++)
	{
		if(num % j == 0)
			{
				isPrime = 0;
				break;
			}
	}
	return isPrime;
}
