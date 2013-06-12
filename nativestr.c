#include <stdio.h>
#include <string.h>

int NativeMatch(char *Text,char *Patter);
int main(int argc, char *argv[])
{	
	char a[100],b[100];
	printf("你的输入是:\n");
	scanf("%s",a);
	printf("匹配串是:\n");
	scanf("%s",b);
	NativeMatch(a,b);
	return 0;
}


int NativeMatch(char *Text,char *Patter)
{
	int tlong=strlen(Text);
	int	plong=strlen(Patter);
	int i,j;
	for(i=0;i<tlong-plong;i++)
	{
		for(j=0;j<plong;j++)
		{
			if(Text[i+j]!=Patter[j]) break;
		}
	if(j==plong)printf("Match in position:%d\n",i+1);

	}
	return 0;
}

