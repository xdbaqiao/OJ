#include <map>
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
	map<char,int> m;
	string a;
	int sum=0;
	for(int i=0;i<10;i++)
		m['0'+i] = i;
	while(cin>>a)
	{
		for(int i=0;i<a.length();i++)
		{
			sum += m[a[i]];
		}
		cout<<sum<<endl;
	}
	return 0;
}
