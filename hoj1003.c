#include<stdio.h>

int main(void)
{
	int i,j,temp,a,temp1,n,count,sum,max,startpos,endpos,temppos1,temppos2;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		temp = sum = max = -10000;
		startpos = endpos = temppos1 = temppos2 = 1;
		scanf("%d",&count);
		for(j = 0;j<count;j++)
		{
			scanf("%d",&a);
			sum = a;
			temp1 =temp;
			if(temp >=0)
			{
				temp += sum;
				temppos2 =temppos1;
			}
			else
			{
				temp = sum;
				temppos1 = j+1;
			}
			if(temp >= max)
			{
				max = temp;
				endpos = j+1;
				if(temp1<0)startpos = j+1;
				else startpos = temppos2;
			}
		}
		printf("Case %d:\n",i+1);
		printf("%d %d %d\n",max,startpos,endpos);
		if(i < n-1) printf("\n");
	}
	return 0;
}
