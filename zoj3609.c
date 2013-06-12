#include<stdio.h>
int main()
{
	int a,i,b,c,j,temp;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d%d",&b,&c);
		for(j=0;j<=b;j++)
		{
			if((c*j+1)%b==0) 
			{
				printf("%d\n",(c*j+1)/b);
				break;
			}
		}
		if(j>b) printf("Not Exist\n");	
	}
	return 0;
}
