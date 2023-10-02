#include<stdio.h>
int main()
{
	int a[50],pos,i,n;
	printf("\n Enter the no. of elements:");
	scanf("%d",&n);
	printf("\n Enter the array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("\n The array is:");
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
	printf("\n Enter the position:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("\n The new array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

