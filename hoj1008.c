#include <stdio.h>
int main(void)
{
	int b,downtime,uptime,stoptime,totaltime,i,j,a[110];

	downtime = 4;uptime = 6;stoptime = 5;
	while(1)
	{
    	scanf("%d",&b);
		if(!b) return 0;
		for(i=0;i<b;i++)
		{
			scanf("%d",&a[i]);
			totaltime = b*5 + a[0] * uptime;
			for(j=1;j<b;j++)
			{
				if(a[j-1]>a[j])totaltime += (a[j-1]-a[j])*downtime;
				else totaltime += (a[j]-a[j-1])*uptime;
			}
		}
		printf("%d\n",totaltime);
	}
	return 0;
}
