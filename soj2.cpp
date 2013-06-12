/*************************************************************************
* File Name: soj2.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月25日 星期日 14时39分23秒
*************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int num, i, j;
    char s[10010];
    cin>>num;
    for(j=0; j<num;j++)
    {
        scanf("%s",s);
        int sum = 0;
        for(i=strlen(s)-1;i>=0;i=i-2)
        {
            if(i != 0)sum += (int(s[i])-48)*10 + int(s[i-1])-48;
            if(i==0)
                sum += int(s[i])-48;
        }
        if(sum%99 != 0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
