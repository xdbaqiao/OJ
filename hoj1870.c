#include<stdio.h>
int main()
{	
	char a[1010];
	int i,res;
	while(scanf("%s",a)!=EOF)
	{
		res = 0;
		for(i=0;i<sizeof(a);i++)
		{
			if(a[i]=='B')break;
			if(a[i]=='(')res++;
			if(a[i]==')')res--;
		}
		printf("%d\n",res);
	}
	return 0;

}
