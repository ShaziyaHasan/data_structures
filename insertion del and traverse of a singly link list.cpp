#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
void traverseinorder(NODE *start)
{
	while(start!=NULL)
	{
		printf("%d %c",start->info,' ');
		start=start->next;
	}
 } 
 
 void insertatbeg(int item)
 {
 	NODE *ptr;
 	ptr=(NODE*)malloc(sizeof(NODE));
 	ptr->info=item;
 	if(start==NULL)
 	ptr->next=NULL;
 	else
 	ptr->next=start;
 	start=ptr;
 	//return(start)
 }
 
 void insertatend(int item)
 {
 	NODE *ptr,*loc;
 	ptr=(NODE*)malloc(sizeof(NODE));
 	ptr->info=item;
 	ptr->next=NULL;
 	if(start==NULL)
 	start=ptr;
 	else
 	loc=start;
 	while(loc->next!=NULL)
 	{
 		loc=loc->next;
 		loc->next=ptr;
	 }
 }
 
 void addafter(int item,int pos)
 {
 	NODE *temp,*q;
 	int i;
 	q=start;
 	for(i=0;i<pos-1;i++)
 	{
 		q=q->next;
 		if(q==NULL)
 		 printf("\n There are less than %d elements.",pos);
 		 return;
    }
 		 
 	temp=(NODE*)malloc(sizeof(NODE));
  	temp->next=q->next;
 	temp->info=item;
 	q->next=temp;
 }
 
 void del_beg(void)
 {
 	NODE *temp;
 	temp=start;
 	start=start->next;
 	free(temp);
 }
 
 void del_end(void)
 {
 	NODE *ptr,*loc;
 	if(start==NULL)
 	 return;
 	else if(start->next==NULL)
 	{
 		ptr=start;
 		start=NULL;
 		free(ptr);
	 }
	else
	{
		loc=start;
		ptr=start->next;
		while(ptr->next!=NULL)
		{
			loc=ptr;
			ptr=ptr->next;
		}
		loc->next=NULL;
		free(ptr);
	}
 }
 
 void del_bw(int item)
 {
 	NODE *temp,*q;
 	q=start;
 	while(q->next->next!=NULL)
 	{
 		if(q->next->info==item)
 		{
 			temp=q->next;
 			q->next=temp->next;
 			free(temp);
 			return;
		 }
	  q=q->next;
	 }
 }
 
 int main()
 {
 	int choice,item,pos;
 	char ch;
 	do
 	{
 		printf("\n 1.Insert element at beginning.");
 		printf("\n 2.Insert element at end.");
 		printf("\n 3.Insert element at specified position.");
 		printf("\n 4.Delete element at beginning.");
 		printf("\n 5.Delete element at end.");
 		printf("\n 6.Delete element at specified position.");
 		printf("\n 7.EXIT.");
 		printf("\n Enter the choice:");
 		scanf("%d",&choice);
 		fflush(stdin);
 		switch(choice)
 		{
 			case 1:
 				printf("\n Enter the item:");
 				scanf("%d",&item);
 				insertatbeg(item);
 				break;
 			case 2:
 				printf("\n Enter item:");
 				scanf("%d",&item);
 				insertatend(item);
 				break;
 			case 3:
 				printf("\n Enter item:");
 				scanf("\n Enter position:");
 				scanf("%d",&pos);
 				addafter(item,pos);
 				break;
 			case 4:
 				del_beg();
 				break;
 			case 5:
 				del_end();
 				break;
 			case 6:
 				printf("\n Enter the position from where element is to be deleted.");
 				scanf("%d",&pos);
 				del_bw(pos);
 				break;
 			case 7:
 				printf("\n Traverse the list.");
 				traverseinorder(start);
 				break;
 			case 8:
 				exit(0);
 				break;
		 }
		 fflush(stdin);
		 printf("\n Do you want to continue? Y/N");
		 scanf("%c",&ch);
		 fflush(stdin);
	 }
	while(ch=='y'||ch=='Y');
	return 0;
 }
