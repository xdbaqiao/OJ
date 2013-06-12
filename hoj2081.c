#include<stdio.h>
int main()
{
	int a,i;
	char b[12];
	scanf("%d",&a);
	while(a--)
	{
		scanf("%s",b);
		printf("6");
		for(i=6;i<11;i++)printf("%c",b[i]);
		printf("\n");
	}
	return 0;
}
