#include <iostream>

using namespace std;
const int _max=10001;

int main()
{
	int nnum;
	int i,j,k;
	int c1[_max],c2[_max];
	while(cin>>nnum)
	{	
		for(i=0;i<=nnum;i++)
		{
			c1[i]=1;
			c2[i]=0;
		
		}
		for(i=2;i<=3;i++)
		{
			for(j=0;j<=nnum;j++)
				for(k=0;k+j<=nnum;k+=i)
				{
					c2[k+j]+=c1[j];	
				}
			for(j=0;j<=nnum;j++)
			{
				c1[j]=c2[j];
				c2[j]=0;
			}
		}
		cout<<c1[nnum]<<endl;
	}
	return 0;
}
