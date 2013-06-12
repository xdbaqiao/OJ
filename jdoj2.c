#include<stdio.h>
#define N 1000010
int main()
{
	int a,b,i,j,top;
	int c[N];
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d",&b);
		for(i=0;i<b;i++)scanf("%d",&c[i]);
		for(i=0;i<b-1;i++)
		{
			
			for(j=i+1;j<2*b;j++)
			{
				if((2*i -j>=0)&&(c[i] > c[i+i-j])){printf("%d ",c[2*i-j]);break;}
				if(j<b&&c[j] < c[i]) {printf("%d ",c[j]);break;}
				if(j==2*b-1) printf("0 ");
			}
		}
		for(i=b-2;i>=0;i--)
		{
			if(c[b-1]>c[i]){printf("%d\n",c[i]);break;}
			if(i==0)printf("0\n");
		}
	}
	return 0;
}
