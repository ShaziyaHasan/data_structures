#include<stdio.h>
int main()
{
	int arr[7] = {1,3,4,6,7,8,9};
	int val,i;
	int n = 7;
	scanf("%d",&val);
	
	for(int j=0;j<n;j++)
	{
		if(arr[j]==val)
		{
			for(i=j;i<n;i++)
			{
				arr[i] = arr[i+1];
			}
			n--;
		}	
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
