/*************************************************************************
* File Name: soj8.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月25日 星期日 16时44分20秒
*************************************************************************/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
struct addc
{
    int a;
    int b;
    int c;
    bool sig;
}test[1001];

int Comp(const void *p1,const void *p2)

{
    struct addc *f = (addc *)p1;
    struct addc *d = (addc *)p2;
    if(f->a != d->a) return f->a-d->a;
    if(f->b != d->b) 
    {
        if(f->sig && !d->sig) return -1;
        if(!f->sig && d->sig) return 1;
        return  f->b - d->b;
    }
    return d->c - f->c;
}

int main()
{
    int num,i,k,a[12][55],j,K,c,d,f;
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        j = 0;
        while(1)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)break;
            j++;
        }
    }

    scanf("%d",&K);

    for(j=0;j<K;j++)
    {
        test[j].sig = false;
        scanf("%d%d%d",&test[j].a, &test[j].b, &test[j].c);
        for(k=1;;k++)
        {
            if(a[test[j].a-1][k]==0) break;
            if(a[test[j].a-1][k]==test[j].b){test[j].sig = true;break;}
        }
    }
    qsort(test,K,sizeof(test[0]),Comp);
    for(j=0;j<K;j++)
        printf("%d %d %08d\n",test[j].a, test[j].b, test[j].c);
    return 0;
}
