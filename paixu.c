#include <stdio.h>


int partion(int str[], int low, int high);
int sort(int str[], int low, int high);
int swaps(int *i,int *j);

int main()
{
	int str[10] = {9,8,7,6,5,4,3,2,1,0};
    int low = 0;
	int high = 9;
	int i;

	partion(str, low, high);
    for (i = 0;i<10;i++) printf("%d ",str[i]);

	return 0;
}

int partion(int str[], int low, int high)
{
	int key;
	if(low<high)
	{
		key = sort(str, low, high);
		partion(str,low,key-1);
		partion(str,key+1,high);
	}
    return 0 ;

}


int sort(int str[], int low, int high)
{
	int pivotkey;
	pivotkey = str[low];
	while(low < high)
	{
		while((low < high) && (pivotkey <= str[high])) high--;
		swaps(&str[low],&str[high]);
		while((low < high) && (pivotkey >= str[low])) low++;
		swaps(&str[high],&str[low]);
	}
	return low;
}
//交换程序出错
int swaps(int *i,int *j)
{
//	*i = *i ^ *j;
//	*j = *j ^ *i;
//	*i = *i ^ *j;

	int k;
	k = *i;
	*i = *j;
	*j = k;
    return 0;
}
