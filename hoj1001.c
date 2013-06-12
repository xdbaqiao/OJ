#include<stdio.h>

int main()
{
	int a,i;
	int sum = 0;
	while(scanf("%d",&a) != EOF)
	{
		sum = 0;
		for(i=0;i<=a;i++)
		{
			sum += i;	
		}
     	printf("%d\n\n",sum);	
	}
	return 0;
}
