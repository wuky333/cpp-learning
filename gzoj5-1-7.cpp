#include<stdio.h>
int main()
{
	int m,n = 1;
	scanf("%d", &m);
	while (m > 0)
	{
		n = (n + 1) * 2 ;
		m--;
	}
	printf("%d",n);
	return 0;
} 
