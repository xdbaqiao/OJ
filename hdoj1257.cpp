#include <stdio.h>
#include <iostream>
#include <algorithm>
#define M 30010

using namespace std;
int main(int argc,char *argv[])
{
    int m, i, j,s[M], num[M],total;
    while(scanf("%d",&m) != EOF)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&s[i]);
            num[i] = 0;
        }
        total = 0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<total;j++)
            {
                if(num[j]>=s[i])
                {
                    num[j]=s[i];
                    break;
                }
            }
            if(j==total)
            {
                num[total] = s[i];
                total++;
                sort(num,num+total);
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
