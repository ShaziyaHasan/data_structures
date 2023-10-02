#include<stdio.h>
#define MAX 3
int top=-1;


void move(int n, char source,char dest,char spar)
{
    if(n==1)
    {
        printf("Move from source to destination.\n");
    }
    else
    {
        move(n-1,source,spar,dest);
        move(1,source,dest,spar);
        move(n-1,spar,dest,source);
    }
}


int main()
{
    int n,A,B,C;
    
    printf("\n Enter the no of rings:");
    scanf("%d",&n);
    move(n,A,B,C);
    return 0;
}
