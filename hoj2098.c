#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 10000

int main(void)
{
	int a,i,j,num;
	int b[N];
	for(i=0;i<N;i++)b[i]=1;
	b[0]=b[1]=0;
	b[2]=1;
	for(i=3;i<N;i++)
	{
		if(i%2==0)
		{b[i]=0;continue;}
		for(j=3;j<=sqrt((double)i);j+=2)
		{
			if(i%j==0)
			{
				b[i]=0;
				break;
			}
		}
	}
	while(1)
	{
		num=0;
		scanf("%d",&a);
		if(a==0)return 0;
		for(i=2;i<a/2;i++)
		{
			if(b[i]==1&&b[a-i]==1)num++;
		}
		printf("%d\n",num);
	}
	return 0;
}

