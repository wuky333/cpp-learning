#include<stdio.h>
int main()
{
	int in,tmp,s,a,sum,count = 0;
	scanf("%d",&in);
	while(in != 153)
	{
		tmp = in;
		sum = 0;
		while(tmp)
		{
			s = tmp % 10;
			sum += s * s * s;
			tmp /= 10;
		} 
		in = sum;
		count ++;
	}
	printf("%d\n",count);
	return 0;
}
