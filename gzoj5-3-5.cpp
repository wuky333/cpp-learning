#include<stdio.h>
int main()
{
    int a,b,c,m; 
    scanf("%d%d%d",&a,&b,&c);
    m=(a*70+b*21+c*15);
    while(m>105) m=m-105; 
    if ((m <= 100)&& (m >=10))printf("%d\n",m);
	else printf("no answer");
    return 0;
}
