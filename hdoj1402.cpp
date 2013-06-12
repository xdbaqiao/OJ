#include<iostream>
#include<stdio.h>
#include<string.h>
#define N 50010
#define M 20000
int *part(char *a);
int main()
{
	char a[N],b[N];
	int *acc,*bcc,res[N],temp[N];
	int i,j,lenacc,lenbcc,yushu,yushutemp;
	while(scanf("%s",a) != EOF)
	{
		scanf("%s",b);
 	    acc = part(a);lenacc = sizeof(acc);
		bcc = part(b);lenbcc = sizeof(bcc);
		for(i=0;i<lenbcc;i++)
		{
			yushu =0;
			yushutemp =0;
			for(j=0;j<lenacc;j++)
			{
				 res[j] = acc[j]*bcc[i]+yushu;
				 yushu = res[j] / 10000;
				 res[j] %= 10000; 
				 temp[i+j] += res[j];
				 yushutemp = temp[i+j]/10000;
				 temp[i+j] %= 10000;
				 temp[i+j+1] += yushutemp;
			}
			if(yushu !=0) {res[j] = yushu;temp[i+j+1] +=yushu;}
		}
		for(i=0;i<sizeof(res);i++)
		{
			printf("%d",res[i]);
		}


	}
	return 0;
}

int *part(char *a)
{
	int *acc;
	int lena,i,j,start,ten;
	lena = sizeof(a);
	start = lena -1;
	for(i=0;i<lena/4;i++) 
	{
		ten = 1;
		for(j = start;j>start-4;j--)
		{
			acc[i] += a[j]*ten;
				ten *= 10;
		}
		start -= 4;
	}
	if(lena%4 != 0)
	{
		acc[i] = a[0];
		for(j=1;j<lena%4;j++)
		{
			acc[i] *= 10;
			acc[i] += a[j];
		}
	}
	return acc;
}
