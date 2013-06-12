#include<stdio.h>
int main()
{
	char c;
	int res;

	while((c=getchar())!= '0')
	{
		res = 0;
		res = (int)(c - '0');
		while((c=getchar())!= '\n')
		{
			res += (int)(c - '0');
		}
		res = res%9;
		if (res ==0) {printf("9\n");continue;} 
		printf("%d\n",res);
	}	
	return 0;
}
