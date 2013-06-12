/*************************************************************************
* File Name: 1.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年09月06日 星期四 19时43分01秒
*************************************************************************/

#include <stdio.h>
#include <iostream>
#define M 1000100
#define MIN 0x80000000

using namespace std;

int v[M],f[M],g[M];

int main(int argc,char *argv[])
{
    int m, n, i, j, max;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        for(i=1;i<=n;i++) scanf("%d",&v[i]);
        for(i=0;i<=n;i++) {f[i]=0;g[i]=0;}
        for(i=1;i<=m;i++)
        {
            max = MIN;
            for(j=i;j<=n;j++)
            {
                if(f[j-1]>g[j-1])f[j] = f[j-1] + v[j];
                else f[j] = g[j-1] +v[j];
                g[j-1] = max;
                if(f[j]>g[j-1]) max = f[j];
            }
            g[j-1] = max;
        }
        cout<<max<<endl;
    }
    return 0;
}
