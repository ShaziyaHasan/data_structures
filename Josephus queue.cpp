#include<stdio.h>
#include<malloc.h>

struct node
{
    int player_id;
    struct node *next;
};

struct node *ptr,*start,*new_node;
int main()
{
    int n,k,i;
    printf("\n Enter no of players and kth value(the one to be eliminated):");
    scanf("%d %d",&n,&k);
    
    start=malloc(sizeof(struct node));
    start->player_id=1;
    ptr=start;
    
    for(i=2;i<=n;i++)
    {
        new_node = malloc(sizeof(struct node));
        ptr->next = new_node;
        new_node->player_id=i;
        new_node->next = start;
        ptr = new_node;
    }
    
    for(int count=n;count>1;count--)
    {
        for(i=0;i<k-1;i++)
        {
            ptr = ptr->next;
            ptr->next = ptr->next->next;
        }
    }
    printf("\n The winner is %d",ptr->player_id);
    return 0;
    
}
