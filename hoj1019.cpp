#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int gongyueshu(int a,int b)
{
	if(b==0)return a;
	return gongyueshu(b,a%b);
}

int main(int argc,char *agrv[])
{
	int min,res,N,m,i,n,max;
	cin>>N;
	while(N--)
	{
		cin>>m;	
		cin>>max;
		while(--m)
		{
			cin>>n;
			max = max/gongyueshu(max,n)*n;
		}
		cout<<max<<endl;
	}
	return 0;
}
