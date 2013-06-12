#include <stdio.h>
#include <string.h>

int main(int argc,char*argv[])
{	
	int ncases,emwet,fulwet,nline,maxwet;
	int value[510],wet[510];
	int i,j,k;
	int record[10000];
 	const int INF=1000000001;

	scanf("%d",&ncases);
	while(ncases--)
	{	
		
		int num=0;
		scanf("%d %d",&emwet,&fulwet);
		maxwet=fulwet-emwet;
		for(i=0;i<=maxwet;i++)
	    	record[i]=INF;
		record[0]=0;
		scanf("%d",&nline);
		while(nline--)
		{
			scanf("%d %d",&value[num],&wet[num]);
			num++;
		}
		for(i=0;i<num;i++)
		{
			for(j=wet[i];j<=maxwet;j++)
			{
				if(record[j]>record[j-wet[i]]+value[i]) 
					record[j]=record[j-wet[i]]+value[i];
			}
		}
		if (record[maxwet]!=INF)
		printf("The minimum amount of money in the piggy-bank is %d.\n",record[maxwet]);
		else printf("This is impossible.\n");
	}
	return 0;
}
