#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
const int N = 100010;
using namespace std;

struct point
{
	double x,y;
}b[N],d[N];

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
	if(a->x==b->x)return a->x<b->x?1:-1;
	return a->y<b->y?1:-1;
}
double min(double a,double b){return a>b?b:a;}
double ans;
int a;
double dis(point a,point b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

double  work(int low,int high)
{
	int mid,i,m,j;
	double minvalue;
	m=0;
	if(low +1 == high){return dis(b[high],b[low]);}	
	if(low +2 == high){return min(dis(b[low],b[high]),min(dis(b[low+1],b[high]),dis(b[low],b[low+1])));}
	mid = (low+high)/2;
	minvalue = min(work(low,mid),work(mid+1,high));

	for(i=low;i<=high;i++)
	{
		if(fabs(b[i].x-b[mid].x)<=minvalue)
		{d[m++]= b[i];}
	}
	qsort(d,m,sizeof(d[0]),compy);

	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(d[j].y-d[i].y>minvalue)break;
			minvalue = min(dis(d[i],d[j]),minvalue) ;
		}
	}
	return minvalue;
}

int main(void)
{
	int i;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)return 0;
		for(i=0;i<a;i++) scanf("%lf %lf",&b[i].x,&b[i].y);
		qsort(b,a,sizeof(b[0]),compx);
		ans = work(0,a-1);
		printf("%.2lf\n",ans/2);
	}
	return 0;
}

