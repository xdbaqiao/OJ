#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int a,i,t;
	char c[1010],d[1010];
	char sum[1010];
	int j,k,m,l,n;
	int cshu,dshu;
	int jinwei;
	int sumshu;
	scanf("%d",&a);
	l = 0;
	while(a--)
	{
		scanf("%s%s",c,d);
		n= 0;
				
		jinwei = 0;
		sumshu = 0;
		printf("Case %d:\n",++l);
		printf("%s + %s = ",c,d);
		j = strlen(c);
		k = strlen(d);
		if(j>=k)
		{
			for(i=k-1;i>=0;i--)
			{
				cshu = c[j-1] - '0';
				dshu = d[i] - '0';
				sumshu =cshu + dshu + jinwei;
				//sumshu = sumshu%10;
				//jinwei = sumshu/10;
				if(sumshu >9)
				{
					sumshu -= 10;
					jinwei = 1;
				}
				else jinwei = 0;

				sum[n] = (char)sumshu + '0';
				sumshu = 0;
				n++;j--;
			}
			if(j>=1)
			{
				for(i=j;i>=1;i--)
				{
					cshu = c[i-1] - '0';
					sumshu = cshu +jinwei;
					if(sumshu >9)
					{
						sumshu -= 10;
						jinwei = 1;
					}
					else jinwei = 0;
					sum[n]=(char)sumshu + '0';
					n++;
				}
			}
			if(jinwei == 1) 
			{
				sum[n]=(char)jinwei + '0';
//						jinwei = 0;
				n++;
			}
		}

		else
		{
			for(i=j-1;i>=0;i--)
			{
				cshu = c[i] - '0';
				dshu = d[k-1] - '0';
				sumshu =cshu + dshu + jinwei;
				if(sumshu >9)
				{
					sumshu -= 10;
					jinwei = 1;
				}
				else jinwei = 0;
				sum[n] = (char)sumshu +'0' ;
				sumshu = 0;
				n++;k--;
			}
			if(k>=1)
			{
				for(i=k;i>=1;i--)
				{
					dshu = d[i-1] - '0';
					sumshu = dshu +jinwei;
					if(sumshu >9)
					{
						jinwei =1;
						sumshu -=10;
					}
					else jinwei =0;
					sum[n] = (char)sumshu + '0';
					n++;
				}
			}
			if(jinwei == 1) 
			{
				sum[n]=(char)jinwei + '0';
//					jinwei = 0;
				n++;
			}
		}
		sum[n] = '\0';
		for(i=strlen(sum)-1;i>=0;i--)printf("%c",sum[i]);
		if(a != 0)
		{
			printf("\n");
			printf("\n");
		}
		else printf("\n");
	}
	return 0;
}
