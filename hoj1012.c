#include<stdio.h>
int main()
{
	int i,div;
	double res;
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	res = 2.5;
	div = 2;
	for(i=3;i<10;i++)
	{
		div *= i;
		res += 1/(double)div;
		printf("%d %.9f\n",i,res);
	}
	return 0;
}
