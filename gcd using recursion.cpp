#include<stdio.h>

int gcd(int n1, int n2)
{
    int rem;
    if(n1>1 && n2>1)
    {
    rem = n1 % n2;
    if(rem==0)
    {
        return n2;
    }
    else
    {
        return (gcd(n2,rem));
    }}
}

int main()
{
    int n1,n2,res;
    scanf("%d",&n1,n2);
    res = gcd(n1,n2);
    printf("%d",res);
    return 0;
}
