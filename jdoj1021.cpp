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
	vector<char> va,vb;	
	char c;
	int i,k;
	while(1)
	{
		i=0;
		while((c=getchar())!='\n'&& c != '#')va.push_back(c);
		if(c=='#')return 0;
		while((c=getchar())!='\n')vb.push_back(c);
		vector<char>::iterator it,ittot;
		for(it = va.begin();it !=va.end();it++)
		{
			k=0;
			for(ittot = vb.begin(); ittot != vb.end();ittot++)
				if(*it == *ittot) k++;
			cout<<*it<<" "<<k<<endl;
		}
		va.clear();vb.clear();
	}
	return 0;
}
