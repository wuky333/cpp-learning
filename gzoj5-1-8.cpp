#include<stdio.h>
int main()
{
	int page = 0,n,temp;
	scanf("%d", &n);
	while (n)
	{
		page++;
		temp = page;
		while (temp)
		{
			if (temp%10 == 1)
			{
				n--;
				break;
			}
			temp = temp/10;
		}
	}
	printf("%d",page);
	return 0;
} 
