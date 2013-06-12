#include<stdio.h>
int main(void)
{
	int a,b,c;
	int i,j,tempb,tempc;
	scanf("%d",&a);
	while(a--)
	{
		i =0;
		j =0;
		scanf("%d %d",&b,&c);
		tempb = b;
		tempc = c;
		while(b!=0)
		{
			i += b%2 ;
			b = b/2;
		}
		while(c!=0)
		{
			j += c%2 ;
			c = c/2;
		}
		if(i>j)printf(">\n");
		if(i==j)
		{
			if(tempb>tempc)printf(">\n");
			else if(tempc>tempb)printf("<\n");
			else printf("=\n");
		}
		if(i<j) printf("<\n");
	}
	return 0;
}
