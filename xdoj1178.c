#include<stdio.h>

int main()
{
	int a,b;
	while(scanf("%d",&a) !=EOF)
	{
		printf("%d\n",a*a*2+1-a);
	}
	return 0;
}
