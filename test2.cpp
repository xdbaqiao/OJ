/*************************************************************************
* File Name: test2.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年09月21日 星期五 18时32分38秒
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

int converseFromstring(const string &s)
{
    istringstream i(s);
    int x;
    if(i>>x)return x;
}
int main(int argc,char *argv[])
{
    string s;
    int strlength,i,yushu;
    while(1)
    {
       cin>>s;
       if(s=="0")return 0;
       strlength = s.length();
       if(strlength > 8)
       {
           yushu = 0;
           for(i=0;i<strlength/8;i++)
           {
               yushu *= 100000000;
               yushu += converseFromstring(s.substr(8*i,8));
               yushu %= 3;
           }
           if(strlength%8 != 0)
               cout<<(yushu*100000000+converseFromstring(s.substr(8*i,8)))%3<<endl;
       }
    }
    return 0;
}
