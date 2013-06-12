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
	int k,N,M,G,i,j,sum,score[10],temp,pronum,everscore[10];
	int res[1000];
	string temp2,s[1000],sres[1000];
	while(1)
	{
		cin>>N;
		if(N==0)return 0;
		cin>>M>>G;
		k=0;
		for(i=0;i<M;i++)scanf("%d",&score[i]);
		for(i=0;i<N;i++)
		{
			sum =0;
			cin>>s[i]>>pronum;
			for(j=0;j<pronum;j++) 
			{
				cin>>everscore[j];
				sum += score[everscore[j]-1];
			}
			if(sum>=G)
			{
				sres[k] = s[i];
				res[k++] = sum;
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=i;j<k;j++)
			{
				if(res[j]>res[i]) 
				{
					temp = res[j];res[j]=res[i];res[i]=temp;
					temp2 = sres[j];sres[j]=sres[i];sres[i]=temp2;
				}
				if(res[j]==res[i]&&sres[j]<sres[i])
				{
					temp2 = sres[j];sres[j]=sres[i];sres[i]=temp2;
				}
			}
		}
		cout<<k<<endl;
		for(i=0;i<k;i++)
			printf("%s %d\n",sres[i].c_str(),res[i]);

	}
	return 0;
}
