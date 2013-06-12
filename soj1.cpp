/*************************************************************************
* File Name: soj1.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月25日 星期日 14时03分12秒
*************************************************************************/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string s1;
    while(1)
    {
        cin>>s1;
        if(s1=="XXX")return 0;
        
        int sum=0;
        char tmp;
        string::iterator it;
        for(it=s1.begin(); it!=s1.end(); it++)
        {
            if(int(*it)>60) 
            {
                if(sum != 0)
                    for(int i=0;i<sum-1;i++)
                        cout<<tmp;
                cout<<*it;
                tmp = *it;
                sum = 0;
            }
            else
            {
                if (sum != 0 )
                    sum = sum*10+int(*it)-48;
                else
                    sum = int(*it)-48;
            }
        }
        if(sum != 0)
            for(int i=0;i<sum-1;i++)
                cout<<tmp;
        cout<<endl;
    
    
    }



    return 0;
}
