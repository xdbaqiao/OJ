/*************************************************************************
* File Name: 1.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年07月09日 星期一 18时18分04秒
*************************************************************************/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <list>

using namespace std;
int main(int argc,char *argv[])
{
    int n,x;
    double sum;
    cout.precision(3);
    while(cin>>n)
    {
        sum =0.0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            sum +=x;
        }
        cout<<fixed<<sum/n<<endl;
    }
    return 0;
}
