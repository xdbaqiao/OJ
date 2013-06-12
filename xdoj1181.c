#include<stdio.h>
int main()
{
	int a,m,n,res,tmp1,tmp2;
	scanf("%d",&a);	
	while(a--)
	{
		res =0;
		scanf("%d %d",&n,&m);
		if(n==0)printf("0\n");
		else if(n<=m)printf("6\n");
		else
		{
			tmp1 = n/m ;
			tmp2 = n%m ;
			if (tmp2 == 0) res = tmp1*6;
			else
			{
				res += (n/m-1)*6;
				if(2*tmp2>=m) res +=12;
				else res += 9;
			}
			printf("%d\n",res);
		}
	}
	return 0;
}
