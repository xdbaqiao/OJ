#include <stdio.h>

int test(int *str);
int main (int argc, char *argv[])
{
	int str[100];
	int index=5;
	int i;
	for(i=0;i<100;i++) str[i]=i;
	test(str+index);
	return 0;
}


int test(int *str)
{	
	int j;
	for(j=0;j<10;j++)printf("%d\n",str[j]);
	return 0;
}
