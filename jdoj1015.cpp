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
	int a,b,k,sig,ji;
	while(1)
	{
		sig =1;
		cin>>a>>b;
		if(a==0&&b==0)return 0;
		cin>>k;
		ji = pow(10,k);
		if((a%ji)==(b%ji))sig =0;
		if(sig == 0) cout<<"-1"<<endl;
		else cout<<a+b<<endl;	
	}
	return 0;
}
