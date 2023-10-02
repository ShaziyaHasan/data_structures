#include<stdio.h>
int main()
{
	int a[20],i,n,ele,first,last,mid;
	printf("\n Enter the no. of elements:");
	scanf("%d",&n);
	printf("\n Enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the elements to be searched:");
	scanf("%d",&ele);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(a[mid]<ele)
		{
			first=mid+1;
		}
		else if(a[mid]>ele)
		{
			last=mid-1;
		}
		else(a[mid]==ele)
		{
			printf("\n Element found at %d",mid);
			break;
		}
		if(first>last)
		{
			printf("\n Search unsuccessful.");
		}
	}
	return 0;
}
