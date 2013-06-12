#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int isprime(int a)
{
	int i;
	if(a==1||a<=0)return 0;
	if(a==2)return 1;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return 0;
	}
	return 1;
}
int main(int argc,char *agrv[])
{
	int a;
	while(cin>>a)
	{
		if(isprime(a))printf("yes\n");
		else cout<<"no"<<endl;
	}

	return 0;
}
