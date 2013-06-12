#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

string converseToString(double a)
{
	ostringstream o;
	if(o<<a)return o.str();
}

int main(int argv,char *agrc[])
{
	int a,n,j,res,sig;
	string s;
	vector<string> v;
	while(cin>>n)
	{
		a = floor(sqrt(n))+1;
		for(int i=10;i<a;i++)
		{
			res = i*i;
			s = converseToString(res);
			sig =0;
			for(int k=0;k<s.length();k++)
			{
				for(j=k+1;j<s.length();j++)if(s[k]==s[j]){sig =1;break;}
				if(sig ==1)break;
			}
			if(sig==1)v.push_back(s);
		}
		vector<string>::iterator it;
		for(it=v.begin();it != v.end()-1;it++)cout<<*it<<",";
		cout<<v.back()<<endl;
	}
	return 0;
}
