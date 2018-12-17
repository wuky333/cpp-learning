#include<stdio.h>
#include<math.h> 
int main()
{
	int f,sum;
	char j;
	scanf("%d %s",&f,&j);
	if (f <= 1000) sum = 8;
	else sum = 8 + (floor((f-1000)/500)+1)*4;
	if (j == 'y') sum += 5;
	printf("%d",sum);
	return 0; 
} 
