#include<stdio.h>
int main()
{
	int N,a,b,tmp = 0,tmpa = 0,tmpb = 0,ca, cb;
	scanf("%d%d%d",&N,&a,&b);
	for (int i = 1;i <= (N+1);i++) 
	{
		if ((i <= tmpa + a)) ca = i - tmpa;
		else
		{
			tmpa = tmpa + a;
			ca = i - tmpa;
		}
		
		if ((i <= tmpb + b)) cb = i - tmpb;
		else
		{
			tmpb = tmpb + b;
			cb = i - tmpb;
		}

		if (ca == cb) tmp ++;
	}
	printf("%d",tmp);
	return 0;
} 
