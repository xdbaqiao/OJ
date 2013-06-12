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
	int z,n,i,j;
	while(cin>>n)
	{
		for(i=0;i<=100;i++)
			for(j=0;j<100&&i+j<=100;j++)
			{
				z = 100-i-j;
				if((15*i+9*j+z)<=3*n)
					printf("x=%d,y=%d,z=%d\n",i,j,z);
			}
	}
	return 0;
}
