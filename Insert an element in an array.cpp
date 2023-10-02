#include<stdio.h>
int main()
{
	int a[50],pos,i,num,n;
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
	printf("\n Enter  the new element:");
	scanf("%d",&num);
	printf("\n Enter the position:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=num;
	n=n+1;
	printf("\n The new array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

