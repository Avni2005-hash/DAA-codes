#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
scanf("%d",&A[i]);
    }
    int count=1,candidate=A[0],c=0;
    for(int j=1;j<n;j++)
    {
        if(A[j]==candidate)
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            count=1;
            candidate=A[j];
        }
    }
    for(int k=0;k<n;k++)
    {
        if(A[k]==candidate)
        {
            c++;
        }
    }
    if(c>n/2)
    { 
printf("Majority element is %d\n",candidate);
    }
    else{
        printf("No majority element is there\n");
    }
    
}