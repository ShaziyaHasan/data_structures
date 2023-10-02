#include<stdio.h>
int main()
{
	int arr[10] = {1,5,2,8,9,2,6,0,7,3};
	int pos,i,j,val;
	scanf("%d %d",&pos,&val);
	int n = 10;
	for(i=n-1;i>=pos-1;i--)
	{
		arr[i+1] = arr[i];
	}
	n++;
	arr[pos-1] = val;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
