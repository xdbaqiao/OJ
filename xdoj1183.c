#include<stdio.h>
int main()
{
	int i,a,b,j,num,res;
	char bit[4];
	scanf("%d",&a);
	while(a--)
	{
		i =0;
		scanf("%d",&b);
		num = sizeof(b);
		for(i=0;i<b&&num>1;i++)
		{
			bit[i]=(char)(b/pow(10,num-1) + '0');
			b = b%pow(10,num-1);
			num--;
		}
		bit[i] =(char)(b+'0');
		for(j=0;j<=i;j++)
		{

		
		}


	
	}
	return 0;
}
