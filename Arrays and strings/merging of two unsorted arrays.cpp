#include<stdio.h>
int main()
{
	int arr1[5] = {1,5,2,4,7};
	int arr2[6] = {1,8,2,5,6,0};
	int merged[20];
	int i,r;
	int n = 5, m = 6;
	
	r = n+m;
	int index = 0;
	
	for(i=0;i<n;i++)
	{
		merged[index] = arr1[i];
		index++;
	}
	for(i=0;i<m;i++)
	{
		merged[index] = arr2[i];
		index++;
	}
	for(i=0;i<r;i++)
	{
		printf("%d ",merged[i]);
	}
	return 0;
}
