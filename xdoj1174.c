#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define N 1000010
int prime(int a);
int main()
{
	int sig,i,j,k,numa,b,temp,sum;
	char a[20];
	int *c;
	c = (int *)malloc(sizeof(int)*N);
	int num;
	for(i=2;i<N;i++)
	{
		c[i]=0;
		if(prime(i)==1)	c[i]=1;
	}
	while(1)
	{
		sig = 0;
		scanf("%s ",a);
		scanf("%d",&b);
		numa = strlen(a);
		if (b==0) break;
		for(i=0;i<b;i++)
		{
			if(c[i]==1)
			{
				sum =0;
				for(j=numa-1;j>=0;j--)
				{
					temp = a[j]-'0';

					for(k=j;k<numa-1;k++)
					{
						temp *= 10;
						temp %= i;
					}
					sum +=temp;
				}
				sum %= i;
				if(sum==0)
				{
					sig = 1;
					break;
				}
			}
		}
		if (sig==1)	printf("BAD %d\n",i);
		else printf("GOOD\n");
	}
	return 0;
}
int prime(int a)
{
	int i;
	if(a==2)return 1;
	if(a%2==0)return 0;
	for(i=3;i<sqrt(a);i=i+2)
	{
		if(a%i == 0)return 0;
	}
	return 1;
}
