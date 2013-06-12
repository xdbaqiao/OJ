#include <stdio.h>
int main()
{
	int a;
	int b[20],c[20],d[20];
	scanf("%d",&a);
	while(a--)
	{
		scanf("%s %s %s",b,c,d);
		printf("%s will survive\n",c);
	}
	return 0;
}
