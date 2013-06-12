/*************************************************************************
* File Name: hdoj1163.cpp
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年09月03日 星期一 20时05分55秒
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
#include <deque>
#include <list>

using namespace std;

int add_bit(int total)
{
    int sum;
    sum =0;
    while(total/10!=0)
    {
        sum += total%10;
        total /= 10;
    }
    sum += total;
    if(sum/10!=0)sum = add_bit(sum);
    return sum;
}

int main(int argc,char *argv[])
{
    int a;
    int num_a;
    int total;
    while(scanf("%d",&a) != EOF)
    {
        if(a==0)return 0;
        num_a = a;
        total = a;
        while( num_a !=1 )
        {
            total *= a;
            total = add_bit(total);
            num_a--;
        }
        printf("%d\n",total);
    }

    return 0;
}
