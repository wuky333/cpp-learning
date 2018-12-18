#include<stdio.h>
int main()
{
	int n,sum = 0, tmp = 0;
	scanf("%d", &n);
	for (int i = 1; i <=n; i+=2)
	{
		tmp += i;
		sum += tmp;
	}
	printf("%d",sum);
	return 0;
} 
