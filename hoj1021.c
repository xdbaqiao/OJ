#include<stdio.h>
int main(void)
{
	int a,i,fn,f1,f2;
	while(scanf("%d",&a) != EOF)
	{
		if(a%4==2)printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
