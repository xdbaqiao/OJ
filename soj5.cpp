/*************************************************************************
* File Name: soj5.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月25日 星期日 16时19分57秒
*************************************************************************/
#include <stdio.h>
#include <iostream>
#include <malloc.h>
#include <algorithm>
using namespace std;

int main()
{
    int num, i ;
    int tmp=0;
    int a;
    while(scanf("%d",&num)!=EOF)
    {
        for(i=0;i<num;i++)
        {
            cin>>a;
            tmp ^= a;
        }
        cout<<tmp<<endl;
    }
    return 0;
}
