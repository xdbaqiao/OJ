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
	unsigned int a,b,c,sum;
	vector<unsigned int> v;
	while(1)
	{
		v.clear();
		cin>>a;
		if(a==0)return 0;
		cin>>b>>c;
		sum = b+c;
		while(sum/a !=0)
		{
			v.push_back(sum%a);
			sum /= a;
		}
		v.push_back(sum%a);
		reverse(v.begin(),v.end());
		vector<unsigned int>::iterator it;
		for(it = v.begin();it!=v.end();it++)
		{
			cout<<*it;
		}
		cout<<endl;
	}	
	return 0;
}
