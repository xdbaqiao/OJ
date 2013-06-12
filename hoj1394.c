#include<stdio.h>
int main()
{
	int a,b[5010],c[5010],i,j,k,res,temp,tru;
	while(scanf("%d",&a) != EOF)
	{
		for(i=0;i<a;i++)scanf("%d",&b[i]);
		for(i=0;i<5010;i++)c[i]=0;
		tru = 2100000000;
		for(k=0;k<a;k++)
		{
			res = 0;
			if(k == 0)
			{
				for(i=0;i<a;i++)
				{
					for(j=i+1;j<a;j++)if(b[j]<b[i])c[i]++;
				}
			}
			if(k != 0)
			{
				for(j=k;j<a;j++)if(b[j] > b[k-1])c[j] += 1;
				c[k-1] = 0;
				for(j=0;j<k;j++)if(b[j]>b[k-1])c[j] += 1;
			}
			for(i=0;i<a;i++)res += c[i];
			if(tru > res) tru = res;
		}
		printf("%d\n",tru);
	}
	return 0;
}
