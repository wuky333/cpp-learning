#include<stdio.h>
int main()
{
	int d,n,h,day = 0;
	scanf("%d%d%d",&d,&n,&h);
	while((h - d) > 0)
	{
		h = h - d + n;
		day ++ ;
	}
	printf("%d",day+1);
	return 0;
}
