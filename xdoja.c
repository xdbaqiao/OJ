#include <stdio.h>
int main()
{
	int a[13],x,y,res,temp,ytow,ya,yb;
	scanf("%d %d %d %d",a[0],a[1],a[2],a[3]);
	scanf("%d %d %d %d",a[4],a[5],a[6],a[7]);
	scanf("%d %d %d",a[8],a[9],a[10]);
	scanf("%d %d",a[11],a[12]);
	scanf("%d %d",x,y);
	if(y/10 != 0) ytwo = 1;
	if(y>=x&&y-x<=3&&a[3]==1){printf("%d\n",y-x);return 0;}
	if(ytwo ==1)
	{
		ya = y%10;
		yb = y/10;
		if(a[ya-1] == 1&&a[yb-1]==1&&a[11]==1){printf("3\n");return 0;}
	}
	if(y>=x&&a[3]==0)
	{
		if(a[7]==1) 
		{
			res = 100-y+x;
			if(ytwo==1)
			{
				if(a[11]==1&&)
			}

		}
	
	
	}
	if(x>=y&&x-y<=3&&a[7]==1){prtinf("%d\n",x-y);return 0;}

	return 0;
}
