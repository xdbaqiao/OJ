#include<stdio.h>
#include<string.h>


int main(void)
{
	int a,i,j,max,shu;
	char c[1010][15];
	int d[1010];
	while(1)
	{
		scanf("%d",&a);
		if(a == 0) return 0;
		for(i=0;i<a;i++) 
		{
			d[i] = 0;
			scanf("%s",c[i]);
			for(j=0;j<i;j++)
			{
				if (strcmp(c[j],c[i])==0) d[j]++;
			}
		}
		max=d[0];
		shu =0;
		for(i =1;i<a;i++)
		{
			if(max < d[i]) 
			{
				max =d[i];
				shu =i;
			}
		}
		printf("%s\n",c[shu]);
	}

	return 0;
}
