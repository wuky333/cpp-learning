#include<stdio.h>
#include<math.h>
int main()
{
	int tmp,l,h;
	int n,m = 0;
	scanf("%d",&n);
	tmp = n;
	while (n)
	{
		n = n / 2;
		m ++ ;
	}
	l = (int)pow(2,(m-1));
	h = (int)pow(2,(m));
	if ((tmp - l) <= (h - tmp)) printf("%d\n", l);
	else printf("%d\n",h);
	return 0;
}
