/*************************************************************************
* File Name: soj4.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月25日 星期日 15时34分05秒
*************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num,num2,i,j,k,suma,sumb;
    string s[110];
    int sint[110];
    string a[5];
    string b[5];
    cin>>num;
    for(i=0;i<num;i++)
    {
        suma = sumb = 0;
        cin>>num2;
        for(j=0;j<num2;j++)
        {
            cin>>s[j];
            cin>>sint[j];
        }
        for(j=0;j<5;j++)
        {
            cin>>a[j];
            for(k=0;k<num2;k++)
            {
                if(s[k]==a[j]){suma += sint[k];break;}    
            }
        }
        for(j=0;j<5;j++)
        {
            cin>>b[j];
            for(k=0;k<num2;k++)
            {
                if(s[k]==b[j]){sumb += sint[k];break;}    
            }
        }
        if(suma>=sumb)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
