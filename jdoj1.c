#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double C(int temp,int c);
int main()
{
	int a,b,c,i,j,temp;
	double res;
	char d[20][20];
	scanf("%d",&a);
	while(a--)
	{
		res = 0.0;
		temp = 0;
		scanf("%d %d",&b,&c);
		for(i=0;i<b;i++)scanf("%s",&d[i]);
		for(i=0;i<b;i++)
		{
			temp =0;
			for(j=0;j<b;j++)
				if((int)(d[i][j] -'0')==1)temp++;
			if(temp>=c)res += pow(0.5,temp+1)*C(temp,c);
		}	
		printf("%.2f\n",res);
	}
	return 0;
}

double C(temp,c)
{
	int i,j;
	double total,sum;
	sum = 0.0;
	for(i=c;i<=temp;i++)
	{
		total = 1.0;
		for(j=0;j<i;j++) total *= (double)(temp-j)/(double)(j+1);
		sum += total;
	}
	return sum;
}
