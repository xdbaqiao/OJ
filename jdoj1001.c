#include <stdio.h>
int main(void)
{
	int a,b,i,j,num;
	int c[10][210],d[10][210];
	while(1)
	{
		scanf("%d",&a);
		if (a==0)return 0;
		scanf("%d",&b);		
		num=0;
		for(i=0;i<a;i++)for(j=0;j<b;j++)scanf("%d",&c[i][j]);
		for(i=0;i<a;i++)
			for(j=0;j<b;j++)
				{
					scanf("%d",&d[i][j]);
					c[i][j] += d[i][j];
				}
		for(i=0;i<a;i++)
			for(j=0;j<b;j++)
			{
				if(c[i][j] != 0)break;
				else if(j==b-1)num++;
			}
		for(j=0;j<b;j++)
			for(i=0;i<a;i++)
			{
				if(c[i][j] !=0)break;
				else if (i==a-1)num++;
			}
		printf("%d\n",num);
	
	}
	return 0;
}
