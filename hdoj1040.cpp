/*************************************************************************
* File Name: hdoj1040.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月15日 星期四 20时13分44秒
*************************************************************************/

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int c,e[1010],i;
        scanf("%d",&c);
        for(i=0;i<c;i++)
            scanf("%d",&e[i]);
        sort(e,e+c);
        for(i=0;i<c-1;i++)
            cout<<e[i]<<" ";
        cout<<e[c-1]<<endl;
    }
    return 0;
}
