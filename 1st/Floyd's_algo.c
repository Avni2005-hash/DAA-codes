#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};
struct node *getnode(int x)
{
struct node *p=(struct node*)malloc((sizeof(struct node)));
p->val=x;
p->next=NULL;
return p;
}
void loop(struct node *start)
{
struct node *slow=start;
struct node *fast=start;
while(fast!=NULL&&fast->next!=NULL)
{
    slow=slow->next;
fast=fast->next->next;
if(fast==slow)
{
    printf("There exists a loop\n");
return;
}
}
    printf("There is no loop\n");
}
int main()
{
    int n,x;
    printf("Enter the no. of elements in linked list\n");
    scanf("%d",&n);
    struct node *start=NULL,*last=NULL;
    printf("Enter the value for first node\n");
    scanf("%d",&x);
    start=getnode(x);
    last=start;
    for(int i=2;i<=n;i++)
    {
scanf("%d",&x);
last->next=getnode(x);
last=last->next;
    }
    last->next=start->next;
    loop(start);
    return 0;
}