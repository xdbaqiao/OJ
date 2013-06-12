/*************************************************************************
* File Name: hdoj1058.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年08月01日 星期三 17时03分38秒
*************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int res[5900];

int find(int a,int b,int c)
{
    int middle = (a+b)/2;
    if((b-a)==1)return b;
    if(res[middle]>c) return find(a,middle,c);
    if(res[middle]<c) return find(middle,b,c);
    else return middle;
}
int main(int argc,char *argv[])
{
    int i,j,addnum,temp,pos,temp2;
    int pri[]={2,3,5,7};
    for(i=1;i<=10;i++)res[i] = i;
    while(i<=5842)
    {
        for(int k=0;k<4;k++)
        {
            temp2  = res[i-1]/pri[k];
            pos = find(1,i-1,temp2);
            temp = res[pos]*pri[k];
            if(temp<=res[i-1]){temp = res[pos+1]*pri[k];}
            if(k==0)addnum = temp;
            if(k!=0&&temp<addnum)addnum = temp;
        }
        res[i++]=addnum;
    }
    string forstr;
    int inputnum;
    while(cin>>inputnum)
    {
        forstr = "th";
        int postw = inputnum%100;
        int posfr = inputnum%10;
        if(posfr==1&&postw != 11)forstr = "st";
        if(posfr==2&&postw != 12)forstr = "nd";
        if(posfr==3&&postw != 13)forstr = "rd";
        cout<<"The "<<inputnum<<forstr<<" humble number is "<<res[inputnum]<<"."<<endl;
    }
    return 0;
}
