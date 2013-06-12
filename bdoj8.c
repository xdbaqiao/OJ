#include<stdio.h>
#include<string.h>
#define N 100010
int main()
{
	int i,lenth,j,k,m,n,p,stat,num,temp2,tot;
	int lenb,lentemp;
	char a[N],b[N],temp[N];
	tot = 0;
	while(1)
	{
		scanf("%s",a);
		tot ++;
		if(a[0]=='#') return 0;
		lenth = strlen(a);
		stat =0;
		temp2 =0;
		for(i=0;i<lenth;i++)
		{
			num =0;
			for(j=stat;(j<i-1)&&(2*i-j-1)<lenth;j++)
			{
				m=0;
				if(a[j]==a[i]&&a[i-1]==a[2*i-j-1])
				{
					for(k=j;k<=i-1;k++)
					{
						if(a[k] != a[k+i-j]){m = 0;break;}
						temp[m++] = a[k];
					}
					if(m!=0)
					{
						stat = k;num++;
						if((2*i-j)<lenth) i=2*i-j;
					}
				}
			}
			lenb = strlen(b);lentemp = strlen(temp);
		    if(num>temp2)
			{
				temp2 =num;
				lenb = lentemp;
				for(n=0;n<lentemp;n++)
					b[n]=temp[n];
			}
			if(num !=0&&temp2 ==num) 
			{
				if(lenb>lentemp)
				{
					lenb = lentemp;
					for(n=0;n<lentemp;n++)
						b[n]=temp[n];
				}
				else if(lenb==lentemp&&b[0]>temp[0])if(b[0]>temp[0])for(n=0;n<lentemp;n++)b[n]=temp[n];
			}
		}
		printf("Case %d:",tot);
		for(n=0;n<temp2;n++)
		{
			for(p=0;p<lenb;p++)printf("%c",b[p]);
		}
		printf("\n");
	}
	return 0;
}
