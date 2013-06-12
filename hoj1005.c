#include<stdio.h>

int main(void)
{
	int A,B,n,i;
	long int fn1,fn2,fnfnal;
	while(1)
	{
		fn1 = 1;fn2 = 1;fnfnal = 1;
		scanf("%d%d%d",&A,&B,&n);
		if(A==0) return 0;
        n = n%49;
		if (n>=3)
		{
			for(i=2;i<n;i++)
			{
				fnfnal = (A*fn1 + B*fn2)%7;
				fn2 = fn1;
				fn1 = fnfnal;
			}
		}
		printf("%d\n",fnfnal);
	}

	return 0;
}
