#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;
int main(int argc,char *agrv[])
{
	int N,n,m,j,k,i,num;
	cin>>N;
	while(N--)
	{
		k=0;
		while(cin>>n>>m)
		{
			k++;
			num=0;
			if(n==0&&m==0)break;
			for(i=1;i<n;i++)
				for(j=1;j<i;j++)if((j*j+i*i+m)%(i*j)==0)num++;
			cout<<"Case "<<k<<": "<<num<<endl;
		}
		if(N>0)cout<<endl;
	}

	return 0;
}
