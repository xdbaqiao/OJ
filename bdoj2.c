#include<stdio.h>
int main()
{
	int a,b[20],c,i,sum;
	scanf("%d",&a);
	while(a--)
	{
		sum =0;
		scanf("%d",&c);
		for(i=0;i<c;i++)
		{
			scanf("%d",&b[i]);
			sum +=b[i];
		}
		printf("%d\n",sum-c+1);
	
	}
	return 0;
}
