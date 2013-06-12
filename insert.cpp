/*************************************************************************
* File Name: insert.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年10月24日 星期三 15时13分19秒
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
    int a[10], i;
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    int j,key;
    for(j=1;j<10;j++)
    {
        key = a[j];
        i = j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i = i-1;
        }
        a[i+1] = key;
    }
    for(i=0;i<10;i++)
        printf("%d ", a[i]);
    return 0;
}
