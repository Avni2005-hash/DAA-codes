#include <stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int val;
};
struct node* Remove_LastN(struct node *head,int n)
{
   struct node *fast=head,*slow=head;
   for(int i=0;i<n;i++)
   {
       fast=fast->next;
   }
   if(fast==NULL)
   {
       return head->next;
   }
   else{
       while(fast->next!=NULL)
       {
           fast=fast->next;
           slow=slow->next;
       }
       slow->next=slow->next->next;
   }
    return head;
}
struct node* get_node(int val)
{
      struct node *n=(struct node*)malloc(sizeof(struct node));
      n->next=NULL;
      n->val=val;
      return n;
}
struct node* print_list(struct node *head,int n)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
       printf("%d   ",temp->val);
       temp=temp->next;
    }
    printf("\n");
    return head;
}
int main()
{

  printf("Enter the no of elements in linked list\n");
  int n,x,val;
  scanf("%d",&n);
 
  printf("Enter val of 1st node\n");
  scanf("%d",&val);
  struct node *head=get_node(val);
  struct node *temp=head;
  for(int i=2;i<=n;i++)
  {
      printf("%d node",i);
      scanf("%d",&val);
      temp->next=get_node(val);
    temp=temp->next;
  }
  head=print_list(head,n);
  printf("Enter the value of which is to be deleted from back\n");
  scanf("%d",&x);
  head=Remove_LastN(head,x);
  printf("Linled list after the node is deleted\n");
  head=print_list(head,n);
}
