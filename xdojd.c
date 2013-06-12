#include<stdio.h>
#include<malloc.h>
#define N 10000000
int main()
{
	int n,i,k,start,dlenth,tempsum,lenth,j,sig,pos;
	int *d,*a,*b,*c;
	int *temp;
	d = (int *)malloc(sizeof(int)*N);
	a = (int *)malloc(sizeof(int)*N);
	b = (int *)malloc(sizeof(int)*N);
	scanf("%d",&n);

	pos =0;
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]!=0&&b[i]==0||a[i]==0&&b[i]!=0)pos = i;
		if(a[i]==0&&b[i]==0)break;
	}
	lenth =i;
	d[0]=a[pos];d[1]=b[pos];
	if(d[0]==0&&d[1]==0) {printf("1");return 0;}

	dlenth = 2;
	for(i=0;i<dlenth;i++)
	{
		for(j=1;j<lenth;j++)
		{
			if(d[i] <a[j])break;

			sig =0;
			if(a[j]==d[i])
			{
				for(k=0;k<dlenth;k++)
					if(d[k]==b[j]){ sig =1;break;}
				if(sig ==0){d[dlenth]=b[j];dlenth++;}
				sig =0;
			}
			if(b[j]==d[i])
			{
				for(k=0;k<dlenth;k++)
					if(d[k]==a[j]){ sig =1;break;}
				if(sig ==0){d[dlenth]=a[j];dlenth++;}
			}
		}
	}
	printf("%d",dlenth);
	return 0;
}
