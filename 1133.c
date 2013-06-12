#include <stdio.h>
#include <string.h>

int Judge(char *);

int main(int argc,char *argv[])
{
	char str1[110],str2[110];
	int J1,J2;
	while(scanf("%s%s",str1,str2)!=EOF)
	{

		J1=Judge(str1);
		J2=Judge(str2);
		if(J1>J2) printf("wm\n");
		else if(J1<J2) printf("zyf\n");
		else printf("neither\n");
	}
	return 0;
}

int Judge(char *str)
{
	int sum=0,i;
	int num[110];
	num[0]=0;
	int	len=strlen(str);
	for (i=1;i<=len;i++) num[i]=str[len-i]-'0';
	while(len>0)
	{
		for(i=len;i>1;i--)
		{
			num[i-1]+=(num[i]%2)*10;
			num[i]=num[i]/2;
		}
		sum+=num[1]%2;
		num[1]/=2;
		while(num[len]==0)len--;
	}
	return sum;
}

