/*************************************************************************
* File Name: xdub.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年08月01日 星期三 13时32分58秒
*************************************************************************/

#include <stdio.h>
#include <iostream>
#define N 280
using namespace std;

double res[N];

int main(int argc,char *argv[])
{
    double c;
    int pos;
    res[0]= 0.5;
    while(1)
    {
        cin>>c;
        if(c==0.00)return 0;
        if(c<=0.5)
        {
            cout<<"1 card(s)"<<endl;
            continue;
        }
        for(int i=1;i<N;i++)
        {
            res[i] = res[i-1] +(double)1/(i+2);
            if(res[i]>=c)
            {
                pos = i+1;
                break;
            }
        }
        cout<<pos;
        cout<<" card(s)"<<endl;
    }
    return 0;
}
