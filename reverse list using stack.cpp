#include<stdio.h>
#include<conio.h>
void push(int);
int pop(void);
int st[10];
int top=-1;

int main()
{
    int arr[10],i,val;
    printf("\n Enter the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        push(arr[i]);
    }
    
    for(i=0;i<10;i++)
    {
       val = pop();
       arr[i]=val;
    }
    
    printf("\n The reversed array is:");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void push(int val)
{
    st[++top] = val;
}

int pop()
{
    return (st[top--]);
    
}




