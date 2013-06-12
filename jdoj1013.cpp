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
	int N,i,a,j,k,m;
	string s1[1000],s2[1000],s3[1000],ent,leav,enttime,leavtime;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>a;
		for(j=0;j<a;j++)cin>>s1[j]>>s2[j]>>s3[j];
		ent=leav=s1[0];enttime = s2[0];leavtime = s3[0];
		if(a>1)
		{
			for(j=1;j<a;j++)
				for(m=0;m<8;m++)
				{
					if(enttime[m]>s2[j][m])
					{
						ent = s1[j];enttime = s2[j];break;
					}
					else if(enttime[m]<s2[j][m])break;
				}
			for(j=1;j<a;j++)
				for(m=0;m<8;m++)
				{
					if(leavtime[m]<s3[j][m])
					{
						leav = s1[j];leavtime = s3[j];break;
					}
					else if(leavtime[m]>s3[j][m])break;
				}
		}
		cout<<ent<<" "<<leav<<endl;
	}
	return 0;
}
