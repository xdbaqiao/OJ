#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int prime(int);

int main(void)
{
	int t1,k,num,c,b,i;
	int pri[100002];
	pri[0]=pri[1]=0;
	for (i=2;i<=100000;i++)
	{
		if(prime(i)) pri[i]=1;
		else
		{
			pri[i]=pri[i-1]+1;
			for(k=2;k<i;k++)
			{
				if((pri[k]==1)&&(i%k==0))
				{
					t1=pri[i/k]+1;
					if(t1<pri[i]) pri[i]=t1;
					break;
				}
			}
		}
	}
	while(scanf("%d %d",&c,&b)==2)
	{ 
		num=0;
		for(i=c;i<=b;i++)  num=num+pri[i];	
		printf("%d\n",num);
	}
	return 0;
}

int prime(int num3)
{
	int i;
	if(num3==2) return 1;
	if(num3%2==0) return 0;
	for(i=3;i<=sqrt((double)num3);i+=2)	{if(num3%i==0) return 0;}
    return 1;
}   
