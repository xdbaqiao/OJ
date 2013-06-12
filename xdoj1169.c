#include <stdio.h>

unsigned int reback(int b,int c);
int main()
{
	int a;
	unsigned int res;
	scanf("%d",&a);
	while(a--)
	{
		int b;
		scanf("%d",&b);
		if(b==1)printf("0\n");
		else if(b==2)printf("3\n");
		else
		{
			res = reback(b,0);
			printf("%d\n",res);
		}
	
	}
	return 0;
}

unsigned int reback(int b,int c)
{
	unsigned int temp;
	temp = 1;
	if (b==0)return 0;
	if (b==1)return 1;
	if(c==0&&b!=2) temp = temp*3 * reback(b-1,1);
	if(c==0&&b==2)temp =2;
	if(c==1&&b!=2) temp = reback(b-1,1)*2 +reback(b-2,0)*3 ;
	if(c==1&&b==2) temp = temp*2;
	if(temp>=1000000007)temp = temp%1000000007; 
	return temp;

}
