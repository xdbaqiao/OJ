#include<stdio.h>
#define N 1000010
int main()
{
	int a,i;
	double b,temp,f[N];
	f[0]=0.0;
	f[1]=1.00;
	temp =0.0;
	for(i=2;i<N;i++)
	{
		temp += 1/(double)i;
		f[i]=1+0.5*temp;
	}
	while(scanf("%d",&a) != EOF)
	{
		printf("%.2f\n",f[a]);
	}
	return 0;
}
