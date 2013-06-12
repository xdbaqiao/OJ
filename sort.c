/*************************************************************************
* File Name: sort.c
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年11月26日 星期一 11时37分45秒
*************************************************************************/
#include <stdio.h>

int main()
{
    int k,a[100];
    k = 0;
    int num;
    scanf("%d", &num);
    for(k=0;k<num-1;k++)
        scanf("%d ",&a[k]);
    scanf("%d",&a[k]);

    int j, key,i;
    for(i=1;i<num;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(i=0;i<num;i++)
        printf("%d ",a[i]);
    return 0;
}
