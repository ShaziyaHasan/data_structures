#include<stdio.h>
int main()
{
	int arr[10] = {0,1,2,3,4,6,8,9,10,12};
	int i,j,val;
	scanf("%d ",&val);
	int n = 10;
	
	j=0;
	while(arr[j] < val)
	{
		j++;
	}
	
	for(i=n-1;i>=j;i--)
	{
		arr[i+1] = arr[i];
	}
	n++;
	arr[j] = val;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
