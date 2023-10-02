#include<stdio.h>
int main()
{
	int arr[7] = {1,4,2,6,7,0,8};
	int pos,i;
	int n = 7;
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		arr[i] = arr[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
