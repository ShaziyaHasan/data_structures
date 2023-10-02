#include<stdio.h>
#define size 5
int partition(int arr[],int beg,int end);
void quick_sort(int arr[],int beg,int end);
int main()
{
	int arr[size],i,n;
	printf("\n Enter the number of elements:");
	scanf("%d",&n);
	printf("\n ENter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	printf("\n The sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
return 0;
}
int partition(int arr[],int beg,int end)
{
	int left,right,temp,loc,flag;
	loc=left=beg;
	right=end;
	flag=0;
	while(flag!=1)
	{
		while((arr[loc]<=arr[right])&&(loc!=right))
		right--;
		if(loc==right)
		flag=1;
		else if(arr[loc]>arr[right])
		{
			temp=arr[loc];
			arr[loc]=arr[right];
			arr[right]=temp;
			loc=right;
		}
	if(flag!=1)
	{
		while((arr[loc]>=arr[left])&&(loc!=left))
		left++;
		if(loc==left)
		flag=1;
		else if(arr[loc]<arr[left])
		{
			temp=arr[loc];
			arr[loc]=arr[left];
			arr[left]=temp;
			loc=left;
		}
	}
	}
	return loc;
}
void quick_sort(int arr[],int beg,int end)
{
	int loc;
	if(beg<end)
	{
		loc=partition(arr,beg,end);
		quick_sort(arr,beg,loc-1);
		quick_sort(arr,loc+1,end);
	}
}
