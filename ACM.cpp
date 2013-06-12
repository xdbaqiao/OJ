#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <sstream>
#include <set>
#include <map>

using namespace std;

string converseToString(double x)
{
	ostringstream o;
	if(o<<x) return o.str();
	return "conversation error!";
}

double converseFromString(const string &s)
{
	istringstream i(s);
	double x;
	if(i>>x)return x;
}

bool cmp(const int &a,const int &b)
{
	return a<b;
}

struct comp
{
	string name;
	float score;

	bool operator< (const comp &a)const
	{
		return a.score>score;
	}
};

int main(int argv,char *argc[])
{
	vector<int> v(10);
	vector<int>::iterator it;

	for(int i=0;i<10;i++)v[i]=i;	
	sort(v.begin(),v.end(),cmp);

	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;


	string ss;
	ss = converseToString(1976);
	cout<<ss<<endl;
	
	string dd ="2012";
	int p = converseFromString(dd)+2;
	cout<<p<<endl;

	map<string,float> m;
	m["Jack"] = 98.3;
	m["Lee"] = 86.5;
	m["Jim"] = 89.5;

	map<string,float>::iterator itjack = m.find("Jack");
	if(itjack!=m.end())cout<<(*itjack).second<<endl;
	map<string,float>::iterator iter;
	for(iter=m.begin();iter!=m.end();iter++)
		cout<<(*iter).first<<(*iter).second<<endl;

	return 0;
}
