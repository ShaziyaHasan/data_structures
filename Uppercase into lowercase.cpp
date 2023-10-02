#include<stdio.h>
int main()
{
	char s[20],up[22];
	int i=0;
	printf("\n Enter the string:");
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]>='a' && s[i]<='z')
		{
			up[i]=s[i]-32;
		}
		else
		{
			up[i]=s[i];
		}
		i++;
	}
	up[i] ='\0';
	printf("\n The string is:");
	puts(up);
	return 0;
}
