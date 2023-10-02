#include<stdio.h>
int main()
{
	int matrix[7][7]={0};
	int i,j;
	matrix[0][0]=1;
	matrix[1][0] = matrix[1][1] =1;
	for(i=2;i<=7;i++)
	{
		matrix[i][0] = 1;
		
		for(j=1;j<=7;j++)
		{
			matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
		}
	}
	
	for(i=0;i<7;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		{
			printf("\t %d",matrix[i][j]);
		}
	}
	return 0;
	
}
