/*************************************************************************
* File Name: hdoj1087.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年09月03日 星期一 21时08分07秒
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

#define M 1010

using namespace std;

int main(int argc,char *argv[])
{
    int num, i, val[M], j, res[M], total;
    while(1)
    {
        j = 0;total = 0;
        scanf("%d", &num);
        if(num==0)return 0;
        for(i=0;i<num;i++)scanf("%d", &val[i]);
        total = val[0];
        for(i=0;i<num;i++)
        {
            res[i] = val[i];
            for(j=0;j<i;j++)
            {
                if(val[j]<val[i]&&res[j]+val[i]>res[i])
                {
                    res[i] = res[j] + val[i];
                }
            }
            if(res[i]>total)
                total=res[i];
        }

        cout<<total<<endl;
    }
    return 0;
}
