#include<stdio.h>

int power(int i,int j);
int main()
{
	int i,a,k,sig,final;
	while(scanf("%d",&k) != EOF)
	{
		sig =0;
		for(a=1;a<=64 && sig ==0;a++)
		{
			if((k*a)%65 == 47)
			{
				sig=1;
				final = a;
				break;
			}
		}
		if(sig == 0)printf("no\n");
		if(sig == 1)printf("%d\n",final);
	}
	return 0;
}

