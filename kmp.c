#include <stdio.h>
#include <string.h>

int KMPMatch(char *Text,char *Patter,int *pai);

int main(int argc, char *argv[])
{	
	
	int pailong=strlen(b);
	int k=0,i;
	char a[100],b[100];
	int pai[100];
 	pai[0]=0;


	printf("你的输入是:\n");
	scanf("%s",a);
	printf("匹配串是:\n");
	scanf("%s",b);
	
	for(i=1;i<pailong;i++)
	{
		while(k>0&&b[k]!=b[i])k=pai[k-1];
		if(b[k]==b[i])k++;
		pai[i]=k;
	}


	KMPMatch(a,b,pai);
	
	return 0;
}


int KMPMatch(char *Text,char *Patter,int *pai)
{	
	int tlong=strlen(Text);
	int	plong=strlen(Patter);
	int k=0,i;

	for(i=0;i<tlong;i++)
	{
		while(k>0&&Patter[k]!=Text[i])k=pai[k-1];
		if(Patter[k]==Text[i]) k++;
		if(k==plong)
		{
			printf("Match in position:%d\n",i+1);
			k=pai[k-1];
		}
	}
	return 0;
}
