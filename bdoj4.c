#include<stdio.h>
int main()
{
	int a,h,m,res;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d:%d",&h,&m);
		if(m != 0) res = 0;
		else
		{
			res = h+12;
			if(res>24) res -=24;
		}
		printf("%d\n",res);
	
	}
	return 0;
}
