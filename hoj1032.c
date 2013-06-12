#include <stdio.h>

int class(int c );
int main()
{
	int a,b,temp,k,i,j,result;
	while(scanf("%d%d",&a,&b)!= EOF)
	{
		printf("%d %d ",a,b);
		if(b<a){k=b;b=a;a=k;}
		result = class(b);
		for(i=a;i<b;i++)
		{
			temp = class(i);
			if(temp > result) result = temp;
		}
		printf("%d\n",result);
	}
	return 0;
}


int class(int c)
{
	int num,i;
	num =1;
	for(i=c;c!=1;)
	{
		num++;
		if(c%2==0)c /=2;
		else c=3*c+1;
	}
	return num;
}
