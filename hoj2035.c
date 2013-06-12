#include<stdio.h>
int main()
{
	int a,b,i;
	int res;
	while(1)
	{
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)break;
		res = a;
		for(i=1;i<b;i++)
		{
			res *= a;
			if (res>1000)res %=1000; 
		
		}
		if(res>1000) res %=1000;
		printf("%d\n",res);
	
	}
	return 0;
}
