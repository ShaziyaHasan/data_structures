#include<stdio.h>
int main()
{
	char s[100],s1[20],res[150];
	int i=0,j=0,k=0,pos;
	printf("\n Enter the main text and string to be added:");
	gets(s);
	gets(s1);
	printf("\n Enter the position:");
	scanf("%d",&pos);
	while(s[i]!='\0')
	{
		if(i==pos)
		{
			while(s1[k]!='\0')
			{
				res[j]=s1[k];
				j++;
				k++;
			}
		}
		else
		{
			res[j]=s[i];
			j++;
		}
		i++;
	}
	res[i]='\0';
	puts(res);
	return 0;
}
