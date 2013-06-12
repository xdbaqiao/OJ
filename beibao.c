#include <stdio.h>
#include <string.h>

int main(int agrc,char*argv[])
{	
	int i,j,n,nmax,ncases;
	int value[1002],weight[1002];
	int record[1002];
	
	scanf("%d",&ncases);
	while(ncases--)
	{	
		memset(record,0,sizeof(record));
		scanf("%d %d",&n,&nmax);
		for(i=0;i<n;i++) scanf("%d",&value[i]);
		for(i=0;i<n;i++) scanf("%d",&weight[i]);
		for(i=0;i<n;i++)
			for(j=nmax;j>=weight[i];j--)
			{
				if(record[j]<(record[j-weight[i]]+value[i]))
					record[j]=(record[j-weight[i]]+value[i]);
			}
		printf("%d\n",record[nmax]);
	}
	return 0;
}
