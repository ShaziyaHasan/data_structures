#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10],n,i,res=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int exp = n - 1;
	for(i=0;i<n;i++)
	{
		res = res + arr[i] * pow(10,exp);
		exp--;
	}
	printf("%d",res);
	return 0;
}
