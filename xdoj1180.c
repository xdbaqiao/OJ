#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,sum,i,div,c;
	int shu;
	scanf("%d",&a);
	while(a--)
	{
		shu = 0;
		scanf("%d",&sum);
		for(i=0;i<sqrt(sum);i++)
		{
			div = (sum - i*i)%(2*i+1);
			c= (sum-i*i)/(2*i+1);
			if (div == 0&&(c+i)<10)	shu++;
		}
		if (sum ==0)printf("1\n");
		else printf("%d\n",shu);
	}
	return 0;
}
