#include<stdio.h>
int main()
{
	int res,temp,n,m,i,u[2010],d[2010];
	res = 2100000000;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&u[i],&d[i]);
		temp = (u[i]*n)%(u[i]+d[i]);
		if(temp ==0) temp = u[i]+d[i];
		if(temp<res) res =temp;
	}
	printf("%d",res);
	return 0;
}
