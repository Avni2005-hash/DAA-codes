#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define alpha 26
struct node{

struct node *children[alpha];
};
struct node* create()
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<alpha;i++)
    {
        n->children[i]=NULL;
    }
    return n;
}
int insert(struct node *root,char *s)
{
    struct node *cur=root;
    int n=strlen(s);
    int newnodes=0;
    for(int i=0;i<n;i++)
    {
        int j=s[i]-'a';
        if(cur->children[j]==NULL)
        {
            cur->children[j]=create();
            newnodes++;
        }
        cur=cur->children[j];
    }
    return newnodes;
}
int main()
{
    printf("Enter the string\n");
    char s[1000];
    scanf("%s",s);
    struct node *root=create();
    int n=strlen(s);
    int count=0;
    for(int i=0;i<n;i++)
    {
        count+=insert(root,s+i);
    }
    printf("No of distinct substring formed from the given string (including empty string) is:%d\n",count+1);
    return 0;
}