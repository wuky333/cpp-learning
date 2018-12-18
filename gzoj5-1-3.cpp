#include<stdio.h>
int main()
{
	int n;
	double sum = 0.00;
	scanf("%d", &n);
	for (int i = 1; i<=(n-1); i +=2)
		sum += (1.0/i-1.0/(i+1));
	printf("%.2f\n",sum);
	return 0;
} 
