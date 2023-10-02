#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int a[10],top=-1;
void push(int a[],int val);
int pop(int a[]);
void display(int a[]);

int main(int argc,char *argv[])
{
  int val,option;
  do
   {
  	 printf("\n Enter your choice: ");
  	 printf("\n 1.PUSH ");
  	 printf("\n 2.POP ");
	 printf("\n 3.DISPLAY ");
	 printf("\n 4.EXIT");
	 printf("\n Enter your option:");
	 scanf("%d",&option);
	 switch(option)
	 {
	 	case 1:
	 		int j;
	 		printf("\n ENter the value to be inserted:");
	 		scanf("%d",&val);
	 		push(a,val);
	 		for(j=0;j<=9;j++)
	 		{
	 		printf("%d",a[j]);
	 	}
	 		break;
	 		
	 	case 2:
		    val=pop(a);
			if(val!=-1)
			{
				printf("The data popped is %d",val);
				}
			break;
			
		case 3:
			display(a);
			break;
		    			
	 }
   }
   while(option!=4);	
	return 0;
	
}
void push(int a[],int val)
{
	if(top==9)
	{
		printf("\n OVERFLOW");
	}
	else
	{
		top=top+1;
		a[top]=val;
	}
}

int pop(int a[])
{    
    int val;
	if(top==-1)
	{
		printf("UNDERFLOW");
		return -1;
	}
	else
	{
		val=a[top];
		top--;
		return val;
	}
	}
	
void display(int a[])
{
	int i;
	if(top==-1)
	{
		printf("\n Stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n %d",a[i]);
		}
	}
}		

