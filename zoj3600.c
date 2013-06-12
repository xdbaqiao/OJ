#include <stdio.h>
int main()
{
	int t,d,T;
	float total,totalnew,xiaoshu,xiaoshunew;
	scanf("%d",&T);
	while(T--)
	{
		total = totalnew = 0.0;
		scanf("%d%d",&d,&t);
		if(d<=3) {total += 11;totalnew += 11;}
		else if(d<10){total +=11+ (d-3)*2;totalnew +=11+ (d-3)*2.5;}
		else {total += (d-10)*3 + 14;totalnew += (d-10)*3.75 + 17.5;}
		if(t){total += t* 0.4;totalnew += t*0.625;}
		
	    xiaoshu = total - (int)total;
		xiaoshunew = totalnew - (int)totalnew;
		if(xiaoshu >= 0.5) total =(int)total +1.0;
		else total = (int)total+0.0;
		if(xiaoshunew >=0.5) totalnew = (int)totalnew +1.0;
		else totalnew = (int)totalnew +0.0;

		printf("%d\n",(int)(totalnew - total));

	
	}
	return 0;
}
