#include<stdio.h>
int main()
{
	int n,k,sum;
	scanf("%d%d",&n,&k);
	for (int i = n;i <= k;i++)
	{
		sum = 0;
		for (int j = 1;j < i;j++) if (i % j == 0) sum = sum + j;
		if (sum == i) printf("%d ",i);
	}
	return 0;
}
