#include<stdio.h>
int fibonacci(int);
int main()
{
	int n,i=0,res;
	printf("\n ENter the no. of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		res=fibonacci(i);
		printf("\n Result is %d",res);
	}
return 0;
}
 
int fibonacci(int num)
{
	if(num==0)
	  return 0;
	
	else if(num==1)
	  return 1;
	  
	else
	  return (fibonacci(num-1)+fibonacci(num-2));
	
}
