/*************************************************************************
* File Name: test.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年07月09日 星期一 17时31分07秒
*************************************************************************/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int cmp(const void *a,const void *b)
{
 return *(int *)a-*(int *)b;
}
int main()
{
 int n,i,j,t,num;
 int high[250];
 while(scanf("%d",&n)!=EOF)
 {
  num=0;
  high[0]=0;
  while(n--)
  {
   scanf("%d",&t);
   for(i=0;i<num;i++)
    if(high[i]>=t)
    {
     high[i]=t;
     break;
    }
   if(i==num)
   {
    high[num]=t;
    num++;
    qsort(high,num,sizeof(high[0]),cmp);
   }
  }
  printf("%d\n",num);
 }
 return 0;
}
