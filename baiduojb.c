#include<stdio.h> 
struct net
{
	double x;
	double y;
	double z;
	int idx;
}hole[1010],center[1010];
double dis(int i,int j)
{
	return (hole[i].x-center[j].x)*(hole[i].x-center[j].x)+ (hole[i].y-center[j].y)*(hole[i].y-center[j].y)+ (hole[i].z-center[j].z)*(hole[i].z-center[j].z);
}
int main()
{
	int N,K,i,j,t;
	double tot[1010],clu[1010],least;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)scanf("%lf %lf %lf",&hole[i].x,&hole[i].y,&hole[i].z);
	for(i=0;i<K;i++){center[i]=hole[i];center[i].idx = i;}
	for(i=K;i<N;i++)
	{
		
		for(j=0;j<K;j++)
		{
			clu[j]= dis(i,j);
		}
		least = clu[0];
		hole[i].idx = 0;
		for(j=0;j<K;j++)
		{
			for(t=j+1;t<K;t++)
			{
				if(least>clu[j]){least = clu[j];hole[i].idx = j;}	
			}
		}
		total[hole[i].idx] = center[hole[i].idx]+hole[i];

	
	}
	
	return 0;
}
