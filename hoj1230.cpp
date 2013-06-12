/*************************************************************************
* File Name: hoj1230.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年07月08日 星期日 18时00分46秒
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

using namespace std;

int prime[] = {1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113};
int main(int argc,char *argv[])
{
    char s1[1000],s2[1000];
    int s3[30],lens1,lens2,minlen,j,p1[30],p2[30];
    while(scanf("%s%s",s1,s2)!= EOF)
    {

        int i=0;
        int k=0;
        lens1 =strlen(s1);
        lens2 = strlen(s2);
        if(s1[0] =='0'&&s2[0]=='0'&&lens1==1)return 0;
        if(s1[0] =='0'&&s2[0]=='0'&&lens2==1)return 0;
        for(int m=0;m<30;m++){s3[m]=0;p1[m]=0;p2[m]=0;}
        j=1;
        for(i = 0;i<lens1;i++)
        {
            if(s1[lens1 -i-1] != ','){p1[k] += (int)(s1[lens1-i-1]-'0')*j;j *=10;}
            else {j=1;k++;}
        }
        k=0;j=1;
        for(i = 0;i<lens2;i++)
        {
            if(s2[lens2 -i-1] != ','){p2[k] += (int)(s2[lens2-i-1]-'0')*j;j *=10;}
            else {j=1;k++;}
        }
        for(i=0;i<30;i++){s3[i] = p1[i]+p2[i];}
        int j,temp;
        for(j =0;j<=25;j++)
        {
            temp = prime[j+1];
            if(s3[j]>=temp)
            {
                s3[j+1] += s3[j]/temp;
                s3[j] = s3[j]%temp;
            }
        }
        for(k=24;k>0&&s3[k]==0;k--);
        for(;k>0;k--)
        {
            cout<<s3[k]<<',';
        }
        cout<<s3[0]<<endl;
    }
    return 0;
}
