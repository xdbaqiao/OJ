#include<stdio.h>

int main()
{
	int a,b,c,i,temp,j;
	
	while(scanf("%d %d",&a,&b)!= EOF)
	{
		temp =0;
		if(a>=10)a %=10;
		c=a;
		for(i=1;i<b;i++)
		{
			c *= a;
			if(c>=10) c%=10;
			if(a==5||a==1||a==6) break;

			if(c==a){temp =i;break;}
		}
		if(temp)
		{
			temp = (b % temp) + temp ;
			for(i=1;i<temp;i++)
			{
				c *= a;
				if(c>=10) c%=10;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}

