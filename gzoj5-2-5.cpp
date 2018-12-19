#include<stdio.h>
int main()
{
	int c,tmp = 0,sum = 0;
	scanf("%d",&c);
	for (int i = 1;i <= c; i++)
	{
		tmp += i;
		sum += tmp;
	}
	printf("%d\n",sum);
	return 0;
}
