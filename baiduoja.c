#include<stdio.h>
int main()
{
	int a,i,A[100010],j,res,big,bigle,temp;
	scanf("%d",&a);
	for(i=0;i<a;i++) scanf("%d",&A[i]);
	if(a==1)
	{
		printf("%d 0",A[0]);
		return 0;
	}
	if(A[0]>A[1]){big = A[0];bigle = A[1];}
	else{big = A[1];bigle = A[0];}
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			temp = A[i]^A[j];
			if(temp>big){bigle =big;big = temp;}
			if(temp<big&&temp>bigle) bigle = temp;
		}
	}
	printf("%d %d",big,bigle);
	return 0;
}
