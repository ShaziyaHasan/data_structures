#include<stdio.h>
int main()
{
	int arr[10],max,sec_max,i,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	sec_max = arr[1];
	for(i=0;i<10;i++)
	{
		if(arr[i]>sec_max && arr[i]!=max)
		{
			sec_max = arr[i];
		}
	}
	printf("%d",sec_max);
	return 0;
}
