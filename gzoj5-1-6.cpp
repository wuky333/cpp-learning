#include<stdio.h>
int main()
{
	int n,tmp,sum = 1 ,N = 2,a1 = 1,a2 = 1;
	scanf("%d", &n);
	while (1)
	{
		sum += a2;
		if (n < sum) break;
		N++;
		tmp = a2;
		a2 = a1 + a2;
		a1 = tmp;
	}
	printf("%d",N);
	return 0;
} 
