#include<stdio.h>
#include<string.h>
#define MAX 10
int str[MAX];
int top=-1;

void push(char);
int pop(void);

int main()
{
    char exp[MAX];
    int temp,i,flag=0;
    
    gets(exp);
    
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(exp[i]);
        }
        if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(top==-1)
            {
                flag = 1;
            }
            else
            {
                temp = pop();
                if(exp[i]==')' && (temp =='}' || temp==']'))
                    flag = 1;
                    
                if(exp[i]=='}' && (temp ==')' || temp==']'))
                    flag = 1;
                    
                if(exp[i]==']' && (temp ==')' || temp=='}'))
                    flag = 1;
                
            }
        }
    }
    if(top>=0)
    {
        flag = 1;
    }
    if(flag==0)
    {
        printf("\n BALANCED");
    }
    else
    {
        printf("\n UNBALANCED");
    }
    return 0;
}

void push(char val)
{
    if(top==MAX-1)
    {
        printf("\n OVERFLOW");
    }
    else
    {
    str[++top] = val;
    }
}

int pop()
{
    if(top==-1)
    {
        printf("\n UNDERFLOW");
    }
    else
    {
    return (str[top--]);
    }
}
