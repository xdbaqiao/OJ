/*************************************************************************
* File Name: hdoj1061.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年10月30日 星期二 19时45分20秒
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
    int all, num, numt,x;
    int total,i,j,k;
    int xunhuan[]={1,1,4,4,2,1,1,4,4,2};
    scanf("%d",&all);
    for(i=0;i<all;i++)
    {
        total = 1;
        scanf("%d",&num);
        numt = num;
        for(j=0;num>=10;j++,num = num%10);
        x= numt%xunhuan[num];
        if(x==0)x = xunhuan[num];
        for(k=0;k<x;k++) 
        {
            total *=num; 
            if(total/10 != 0) total = total%10;
        }
        if(x==0)total = num;
        cout<<total<<endl;
    }
    return 0;
}
