#include<stdio.h>
int main()
{
	int a[30],b[20],c[70];
	int n1,n2,m,i,j=0;
	printf("\n Enter the no. of elements of first array:");
	scanf("%d",&n1);
	printf("\n Enter the array:");
	for(i=0;i<n1;i++)
	{
	scanf("%d",&a[i]);
    }
    printf("\n The array is:");
    for(i=0;i<n1;i++)
    {
    	printf("%d",a[i]);
	}
	
	printf("\n ENter the no. of elements of second array:");
	scanf("%d",&n2);
	printf("\n Enter the array:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n The array is:");
	for(i=0;i<n2;i++)
	{
		printf("%d",b[i]);
	}
    m=n1+n2;
    for(i=0;i<n1;i++)
    {
    	c[j]=a[i];
    	j++;
	}
	for(i=0;i<n2;i++)
	{
		c[j]=b[i];
		j++;
	}
	printf("\n The merged array is:");
	for(i=0;i<m;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}

