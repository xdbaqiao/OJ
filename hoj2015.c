#include<stdio.h>
int main()
{
	int a,b,i;
	int aver,res;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		aver = a/b;
		for(i=0;i<aver-1;i++)
		{
			res = 2*b*i + 1 + b;
			printf("%d ",res);
		}
		if(a%b !=0) 
		{
			printf("%d ",2*b*(aver-1) + 1 + b);
			res = (aver*b+1+a);
			printf("%d\n",res);
		}
		else printf("%d\n",2*b*(aver-1) + 1 + b);
	}
	return 0;
}
