#include<stdio.h>
int main()
{
	int arr1[5] = {0,1,3,4,7};
	int arr2[6] = {2,5,6,8,9,10};
	int merged[20];
	int i=0,j=0,r;
	int n = 5, m = 6;
	
	r = n+m;
	
	int index = 0;
	
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			merged[index] = arr1[i];
			i++;
		}
		else
		{
			merged[index] = arr2[j];
			j++;
		}
			index++;
	}
	
	if(j==m)
	{
		for(;i<n;i++)
		{
			merged[index] = arr1[i];
			index++;
		}
	}
	else if(i==n)
	{
		for(;j<m;j++)
		{
			merged[index] = arr2[j];
			index++;
		}
	}
	
	for(i=0;i<r;i++)
	{
		printf("%d ",merged[i]);
	}
	return 0;
}
