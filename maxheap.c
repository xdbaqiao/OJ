#include <stdio.h>

int maxheap(int *str,int nfather,int length)				//传入的nfather只堆的系数，从1开始
{
	int i,k;
	int temp;
	if(nfather*2<=length)
	{
		for(i=nfather*2;i<=length;i*=2)
			{
				if(str[nfather-1]<str[i]) 
				{	
					temp=str[i];
					str[i]=str[nfather-1];
					str[nfather-1]=temp;
					k=i;
					maxheap(str,k+1,length);
				}
				if(str[nfather-1]<str[i-1])
				{
					temp=str[i-1];
					str[i-1]=str[nfather-1];
					str[nfather-1]=temp;
					k=i-1;
					maxheap(str,k+1,length);
				}
			}
	}
	return 0;
}

int main()
{	
	int str[15]={0,4,1,3,2,16,9,10,14,8,7};
	int size=11;
	int temp;
	int i,j;

	for(i=size-1;i>1;i--)
	{
		for(j=((i+1)/2);j>0;j--)maxheap(str,j,i);
		temp=str[0];
		str[0]=str[i];
		str[i]=temp;

	}
	for(i=0;i<size;i++)
	{
		printf("%d ",str[i]);
	}
	printf("\n");
	return 0;
}
