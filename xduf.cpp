/*************************************************************************
* File Name: xduf.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年08月01日 星期三 15时10分49秒
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
    int a,b,res;
    double temp;
    cin>>a;
    for(int i =0;i<a;i++)
    {
        cin>>b;
        temp = b*log10(b*1.0);
        temp -= (__int64)temp;
        res = (int)pow(10.0,temp);
        cout<<res<<endl;
    }
    return 0;
}
