#include<stdio.h>
int main()
{
	char s[100],pat[20],rep_pat[20],res[130];
	int i=0,j=0,k,copy_loop=0,rep_index=0,n=0;
	printf("\n Enter the string:");
	gets(s);
	printf("\n Enter the replacing and replaced pattern:");
	gets(pat);
	gets(rep_pat);
	while(s[i]!='\0')
	{
		j=0,k=i;
		while(s[k]==pat[j] && pat[j]!='\0')
		{
			j++;
			k++;
		}
		if(pat[j]=='\0')
		{
			copy_loop=k;
			while(rep_pat[rep_index]!='\0')
			{
				res[n]=rep_pat[rep_index];
				n++;
				rep_index++;
			}
		}
		res[n]=s[copy_loop];
		n++;
		i++;
		copy_loop++;
	}
	res[n]='\0';
	puts(res);
	return 0;
}
