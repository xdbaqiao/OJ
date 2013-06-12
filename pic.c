/*************************************************************************
* File Name: pic.c
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年07月15日 星期日 18时39分22秒
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
    int i;
    while(1)
    {
        for(i=0;i<4000;i++)printf("|/-\\   \r");
        printf("\r");
        for(i=0;i<4000;i++)printf("/-\\|  \r");
        printf("\r");
        for(i=0;i<4000;i++)printf("-\\|/  \r");
        printf("\r");
        for(i=0;i<4000;i++)printf("\\|/-  \r");
        printf("\r");
    }
    return 0;
}
