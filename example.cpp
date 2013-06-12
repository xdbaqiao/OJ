#include <stdio.h>
#include <iostream>
#include <string.h>
#include <set>
 
using namespace std;
 
const int maxn = 1024 ;
int n , k , father[maxn] ;
double diff[maxn][maxn] , x[maxn] , y[maxn] , z[maxn] , mind , maxd ;
bool vis[maxn] ;
const double precision = 1e-9 ;
 
inline double get_max(double mm,double nn) {	return mm > nn ? mm : nn ;	}
inline double get_min(double mm,double nn) {	return mm < nn ? mm : nn ;	}
 
void myUnion(int i,int j)
{
	father[i] = j ;
}
 
int find_anc(int i)	{	return father[i] == i ? i : ( father[i] = find_anc(father[i]) ) ;	}
 
bool check(double pos)
{
	int i , j , cnt ;
	cnt = 1 ;
	memset(vis,0,sizeof(vis));
	for( i = 1 ; i <= n ; i++) father[i] = i ;
	for ( i = 1 ; i <= n ; i++)
	{
		for( j = 1 ; j <= n ; j++) if( i != j )
		{
			if( diff[i][j] < pos ) myUnion(find_anc(i),find_anc(j));
		}
	}
	int sth = 0 ;
	for( i = 1 ; i <= n ; i++) if(!vis[j=find_anc(i)]) {	sth++;	vis[j] = 1 ;	}
	return sth >= k ;
}
 
void solve()
{
	int i , j  ;
	double l , r , mid ;
	l = mind ; r = maxd ;
	while ( l <= r )
	{
		mid = ( l+r ) / 2.0 ;
		//判断mid是否可以构成K个类..
		if (check(mid)) l = mid+precision ;
		else r = mid - precision ;
	}
	printf("%.6lf/n",r);
}
		
int main()
{
	int i , j  ;
	while (scanf("%d%d",&n,&k))
	{
		for ( i = 1 ; i <= n ; i++) scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);
		maxd = -1.0 ; mind = 2.0 ;
		for( i = 1 ; i <= n ; i++)
   			for( j = i ; j <= n ; j++)
   			{
	   			diff[j][i] = diff[i][j] = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
		   		mind = get_min(mind,diff[i][j]);
	   			maxd = get_max(maxd,diff[i][j]);
	   		}
   		solve();
	}
}
