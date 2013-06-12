#include <stdio.h>
#include <string.h>

#define N 100000
int main()
{
	int a[N];
	int n,i,j,m,s,r;
	
	while(scanf("%d",&n) != EOF)
	{
		memset(a,0,N);
		m=1;a[0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0,r=0;j<m||r;j++)
			{
				s = a[j]*i + r;
				r = s / 10;
				a[j] = s % 10;		
			}
			m=j;
		}
		while(m>0)printf("%d",a[--m]);
		printf("\n");
	}
	return 0;
}

