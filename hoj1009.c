#include<stdio.h>
int main(void)
{
	int m,n,i,k,t,j[1010],f[1010],mer[1010];
	double rat[1010],temp,res;
	while(1)
	{
		res =0.0;
		scanf("%d %d",&m,&n);
		if(m==-1&&n==-1)return 0;
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&j[i],&f[i]);
			if(f[i]==0) {res +=j[i];rat[i]=0;}
			else rat[i] = (double)j[i]/(double)f[i];
		}
		for(i=0;i<n;i++)mer[i]=i;
		for(i=0;i<n;i++)
		{
			for(k=i+1;k<n;k++)
			{
				if(rat[i] < rat[k])
				{
					temp = rat[k];
					rat[k] = rat[i];
					rat[i] = temp;
					temp = mer[i];
					mer[i] = mer[k];
				    mer[k] = temp;	
				}
			}
		}
		for(i=0;i<n&&f[mer[i]]!=0;i++)
		{
			if(m<f[mer[i]])
			{
				res += ((double)(m%f[mer[i]])/(double)f[mer[i]])*j[mer[i]];
				break;
			}
			else
			{
				res += (double)j[mer[i]];
				m = m - f[mer[i]];
			}
		}
		printf("%.3f\n",res);
	}
	return 0;
}
