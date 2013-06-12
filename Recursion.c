#include <stdio.h>

char s[11];
int res(int num)
{
	int i,j;
	if(num ==5)
	{
		for(j=1;j<5;j++)
			printf("%c ",s[j]);
		return ;
	}
	for(i='a';i<'f';i++)
	{
		s[num] = i;
		res(num+1);
	}
	return ;
}

int main()
{
	res(1);
	return 0;
}
