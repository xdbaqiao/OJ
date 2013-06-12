#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define BUFSIZE 10

char buf[BUFSIZE];
int bufp  = 0;
int getch(void);
void ungetch(int);

int getint(int *pn)
{
    int c, sign;
    
    while(isspace(c = getch()))
        ;
    if(!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
                   ungetch(c);
                   return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if(c == '+' || c == '-')
       c = getch();
    for(*pn = 0; isdigit(c); c = getch())
       *pn = *pn * 10 + (c - '0');
    *pn *= sign;
    if(c != EOF)
       ungetch(c);
    return c;
}

int main(void)
{
    int n;
    int array[BUFSIZE]={0};
    for(n = 0; n < BUFSIZE && getint(&array[n]) != EOF; n++)
        ;
        
    printf("Array[] is: ");
    for(n = 0; n < BUFSIZE ; n++)   
        printf("%d ", array[n]);
    printf("\n", array[n]);
//    system("PAUSE");
    return 0;
}

int getch(void)
{
//return (bufp > 0) ? buf[--bufp] : getchar();
    return getchar();
}

void ungetch(int c)
{
     if(bufp >= BUFSIZE)
        printf("ungetch: too many characters.\n");
     else
        buf[bufp++] = c;
}
