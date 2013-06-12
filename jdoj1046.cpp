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
	int b,max;
	while(scanf("%d",&max)!= EOF)
	{
		for(int i=0;i<9;i++)
		{
			scanf("%d",&b);
			if(b>max)max=b;
		}
		printf("max=%d\n",max);
	}
	return 0;
}
