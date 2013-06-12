#include<stdio.h>
int main()
{
	int i,a,n,time;
	double c[1010],sum,timedb;
	scanf("%d",&a);
	while(a--)
	{
		sum =0.0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&c[i]);
			sum += c[i];
		}
		if(n==0)
		{
			scanf("%lf",&c[0]);
			printf("1\n");
			continue;
		}
		timedb = (double)19*n - 2*sum;
		if(timedb <= 0.0) time =0;
		else if(timedb > (int)timedb) time = (int)timedb +1;
		else time = (int)timedb;
		printf("%d\n",time);
	}
	return 0;
}
