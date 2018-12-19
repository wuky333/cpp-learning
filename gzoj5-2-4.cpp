#include<stdio.h>
int main()
{
	int k,j,count1 = 1,count2 = 1;
	long long n1 ,n2;	 
	scanf("%d%d",&k,&j);
	n1 = k;
	if (k == 1) n1 = 1;
	else while (n1 > 1) 
	{
		if (n1 % 2 == 1) n1 = 3 * n1 +1;
		else n1 /= 2;
		count1 ++;
	}
	
	n2 = j;
	if (j == 1) n2 = 1;
	else while (n2 > 1) 
	{
		if (n2 % 2 == 1) n2 = 3 * n2 +1;
		else n2 /= 2;
		count2 ++;
	}
	
	if (count1 > count2) printf("%d",count1);
	else printf("%d",count2);
	return 0;
}
