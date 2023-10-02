#include<stdio.h>
#define size 5
int smallest(int arr[],int k,int n);
void selection_sort(int arr[],int n);
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
	selection_sort(arr,n);
	printf("\n The sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
return 0;
}
int smallest(int arr[],int k,int n)
{
	int pos=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	return pos;
}

void selection_sort(int arr[],int n)
{
	int k,pos,temp;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}
