#include <stdio.h>
#include <math.h>


int main()
{
	int a,i,sig,m,res2,res[10000],big,temp,j,k;
	int bitt[100000];
	while(scanf("%d",&a) != EOF)
	{
		big = floor(sqrt(a))+1;
		m=0;
		for(k=0;k<10000;k++)res[k]=0;
		for(i=10;i<big;i++)
		{
			for(k=0;k<10000;k++)bitt[k]=0;
			res2 = i*i;
			temp = res2;	
			j=0;sig =0;
			while(res2 != 0)
			{
				bitt[j++]=res2%10;
				res2 = res2/10;
				for(k=0;j>=2&&k<j-1;k++)
				{
					if(bitt[k]==bitt[j-1]){sig=1;res[m++]=temp;break;}
				}
				if(sig==1)break;
			}
		}
		for(k=0;k<m-1;k++)printf("%d,",res[k]);
		printf("%d\n",res[m-1]);
	}
	return 0;
}
