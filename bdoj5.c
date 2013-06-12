#include<stdio.h>
#include<string.h>
int main()
{
	char str[110],strout[110];
	int lenth,i,jav,j;
	jav =1;
	j =0;
	scanf("%s",str);
	lenth = strlen(str);
	if(str[0]=='_'){printf("Error!");return 0;}
	for(i=0;i<lenth;i++)
	{
		if('_' == str[i]) {jav =0;break;}
	}
	if(jav==0)
	{
		for(i=0;i<lenth;i++)
		{
			if(str[i]!='_'&&str[i]<97){printf("Error!");return 0;}
			if(str[i]=='_')
			{	
				if((i+1)==lenth){printf("Error!");return 0;}
				strout[j] = str[i+1]-32;  
				if(strout[j]<65){printf("Error!");return 0;}
				j++;i++;
			}
			else
			{
				strout[j] =str[i];
				j++;
			}
		}
	}
	else
	{
		if(str[0]<97){printf("Error!");return 0;}
		for(i=0;i<lenth;i++)
		{
			if(str[i]<=90)
			{
				strout[j]='_';
				strout[j+1]=str[i]+32;
				j +=2;
			}
			else
			{
				strout[j] = str[i];j++;
			}
		}
	}
	for(i=0;i<j;i++)printf("%c",strout[i]);
	return 0;
}
