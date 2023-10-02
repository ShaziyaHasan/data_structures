#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node_type
{
	int data;
	struct node_type *next;
}node;
typedef node *list;
list head,temp,tail,start,start1,head1,temp1,loc;
list insbeg(void);
list insend(void);
list ins_spec(list,int);
void traverse(node*);
int main()
{
	int c,pos;
	char c1;
	printf("\n LINK LIST CREATION.");
	do
	{
		printf("\n 1. For insertion at the beginning.");
			printf("\n 2. For insertion at the end.");
			printf("\n 3. For insertion at the specific position.");
			printf("\n 4. Traverse the list.");
			printf("\n 5. EXIT");
			printf("\n Enter your choice:");
			scanf("%d",&c);
			fflush(stdin);
			switch(c)
			{
				case 1:
				    start=insbeg();
				    break;
				    
				case 2:
					start=insend();
					break;
					
				case 3:
					printf("\n ENter the position:");
					scanf("%d",&pos);
					start=ins_spec(start,pos);
					break;
					
				case 4:
					traverse(start);
					break;
					
				case 5:
					exit(0);
					break;
			}
		printf("\n");
		printf("\n Do you want to continue:(Y/N)");
		scanf("%c",&c1);
		fflush(stdin);
	}
	while(c1=='y'||c1=='Y');
	return 0;
}
list insbeg(void)
{
	char ch;
	int n;
	head=NULL;
	do
	{
		printf("\n Enter data:");
		scanf("%d",&n);
		temp=(list)malloc(sizeof(node));
		temp->data=n;
		temp->next=head;
		head=temp;
		printf("\n Enter more data:(Y/N)");
		scanf("%c",&ch);
		fflush(stdin);
	}
	while(ch=='y'||ch=='Y');
	return(head);
}

list insend(void)
{
	char ch;
	int n;
	head1=NULL;
	do
	{
		printf("\n Enter data:");
		scanf("%d",&n);
		temp=(list)malloc(sizeof(node));
		temp->data=n;
		temp->next=NULL;
		if(head1==NULL)
		{
			head1=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
		printf("\n Enter more data:(Y/N)");
		scanf("%c",&ch);
		fflush(stdin);
	}
	while(ch=='y'||ch=='Y');
	return(head);
}

list ins_spec(list start,int pos)
{
	int n;
	temp=start;
	if(temp==NULL)
	{
		printf("\n Empty List.");
	}
	else
	{
		for(int j=0;j<pos;j++)
		{
			temp=temp->next;
		}
	loc=temp->next;
	printf("\n Enter the new node information:");
	scanf("%d",&n);
	fflush(stdin);
	temp1=(list)malloc(sizeof(node));
	temp->data=n;
	temp->next=temp1;
	temp1->next=loc;
	}
	return(start);
	
}

void traverse(list start)
{
	
	
	
	while(start!=NULL)
	{
		printf("%d",start->data);
		start=start->next;
	}
}
