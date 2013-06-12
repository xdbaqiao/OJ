/*************************************************************************
* File Name: mac.c
* Author: Bingo
* Mail: baqiaoyancao@163.com
* Created Time: 2012年07月16日 星期一 10时45分11秒
*************************************************************************/

#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <string.h>
#include <net/if.h>

int main(int argc,char *argv[])
{
    struct ifreq rest;
    int fd;

    if(argc!=2)
    {
        printf("Usage: ethname\n");
        return 1;
    }
    fd = socket (AF_INET, SOCK_STREAM, 0);
    if(fd==-1)
    {
        perror("socket");
        return 2;
    }
    strcpy(rest.ifr_name, argv[1]);
    if(ioctl(fd, SIOCGIFHWADDR, &rest)<0)
    {
        perror("ioctl");
        return 3;
    }
    printf("%02x-%02x-%02x-%02x-%02x-%02x\n",
            (unsigned char)rest.ifr_addr.sa_data[0],
            (unsigned char)rest.ifr_addr.sa_data[1],
            (unsigned char)rest.ifr_addr.sa_data[2],
            (unsigned char)rest.ifr_addr.sa_data[3],
            (unsigned char)rest.ifr_addr.sa_data[4],
            (unsigned char)rest.ifr_addr.sa_data[5]
            );

    return 0;
}
