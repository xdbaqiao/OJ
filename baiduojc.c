#include <stdio.h>
#include <string.h>

int a,i,sum,dp[1010][1010],j;
int k[2],X[1010],Y[1010],A[2],B[2];

int ok(int i,int j){return X[i]*A[j]+Y[i]*B[j];}
int max(int a,int b){return a<b?b:a;}
int min(int a,int b){return a<b?a:b;}
int main()
{
	memset(dp,0,sizeof(dp));
	sum =0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d %d",&X[i],&Y[i]);
	}
	scanf("%d %d %d",&k[0],&A[0],&B[0]);
	scanf("%d %d %d",&k[1],&A[1],&B[1]);
	
	for(i=1;i<=a;i++)
		for(j=0;j<=i;j++)
		{
			if(j!=0) dp[i][j] = dp[i-1][j-1] +ok(i,0);
		    dp[i][j] =max(dp[i][j] ,dp[i-1][j] + ok(i,1));
		}

	for(i=0;i<=min(a,k[0]);i++)
		sum = max(dp[a][i],sum);
	printf("%d\n",sum);
	return 0;
}
