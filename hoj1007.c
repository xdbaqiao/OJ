#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define min(a,b) a<b?a:b
#define N 100010

struct point
{
	double x,y;
}b[N];

int compx(const void *p1,const void *p2)
{
	struct point *a = (struct point *)p1;
	struct point *b = (struct point *)p2;
	if(a->x==b->x)return a->y<b->y?1:-1;
	return a->x<b->x?1:-1;
}
int compy(const void *p1,const void *p2)
{
	struct point *a = (struct point *)p1;
	struct point *b = (struct point *)p2;
	if(a->y==b->y)return a->x<b->x?1:-1;
	return a->y<b->y?1:-1;
}
//double min(double a,double b){return a>b?b:a;}
double ans;
int a;

int main(void)
{
	int i;
	while(1)
	{
		ans = 2100000000;
		scanf("%d",&a);
		if(a==0)return 0;
		for(i=0;i<a;i++) scanf("%lf %lf",&b[i].x,&b[i].y);
		qsort(b,a,sizeof(b[0]),compx);
		work();
		qsort(b,a,sizeof(b[0]),compy);
		work();
		printf("%.2lf\n",sqrt(ans)/2);
	}
	return 0;
}

int  work()
{
	int i,j;
	for(i=0;i<a;i++)
		for(j=i+1;j<i+5&&j<a;j++)
			ans = min(ans,(b[j].x-b[i].x) * (b[j].x-b[i].x)+(b[j].y-b[i].y)*(b[j].y-b[i].y));
	return 0;
}
