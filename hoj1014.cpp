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
	int a,b,i,j,temp,temp1,sig;
	bool c[100000];
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		temp1 = 0;
		sig=0;
		for(i=0;i<b;i++)c[i]=false;
		c[0]= true;
		for(i=0;i<b;i++)
		{
			temp = (temp1 + a)%b;
			c[temp]=true;
			temp1 =temp;
		}
		for(i=0;i<b;i++)
			if(c[i]==false)break;
		
		if(i==b)printf("%10d%10d    Good Choice\n",a,b);
		else printf("%10d%10d    Bad Choice\n",a,b);
		cout<<endl;
	}

	return 0;
}
