#include<stdio.h>
#include<string.h>

int gcd(int a,int b);
int getbit(int c);
int main(void)
{
	int a,i,numerator,sum,denominator,g,temp;
	while(scanf("%d",&a) != EOF)
	{	
		sum = 0;
		numerator = 0;
		denominator = 1;
		for(i=1;i<=a;i++)
		{
			numerator =numerator * i + a * denominator;
			denominator *= i;
			g = gcd(numerator,denominator);
			numerator /= g;
			denominator /= g;
			sum += numerator/denominator;
		    numerator %= denominator;
		}
		if(numerator == 0) printf("%d\n",sum);
		else
		{
			temp = getbit(sum)+1;
			for(i=0;i<temp;i++)printf(" ");
			printf("%d\n%d ",numerator,sum);
			for(i=0;i<getbit(denominator);i++)printf("-");
			printf("\n");
			for(i=0;i<temp;i++)printf(" ");
			printf("%d\n",denominator);
		}
	}	
	return 0;
}

int gcd(int a,int b)
{
	while((a>b)?(a %= b):(b %= a)) ;
	return a+b;
}

int getbit(int c)
{
	int i;
	i=0;
	for(i=0;c>=10;i++,c /= 10) ;
    return i+1;
}
