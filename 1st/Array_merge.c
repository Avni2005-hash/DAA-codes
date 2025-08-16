#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    printf("Enter the no of elements in array 1\n");
    scanf("%d",&n1);
    int A[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the no of elements in array 2\n");
    scanf("%d",&n2);
    int B[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
    }
    int j=n1-1,k=0;
    while(j>=0&&k<n2)
    {
      if(A[j]>B[k])
      {
          int temp=A[j];
          A[j]=B[k];
          B[k]=temp;
      }
      j--;
      k++;
    }
    
        for(int i=0;i<n1-1;i++)
    {
        for(int j=i+1;j<n1;j++)
        {
if(A[i]>A[j])
{
int temp=A[i];
A[i]=A[j];
A[j]=temp;
}
        }
    }
        for(int i=0;i<n2-1;i++)
    {
        for(int j=i+1;j<n2;j++)
        {
if(B[i]>B[j])
{
int temp=B[i];
B[i]=B[j];
B[j]=temp;
}
        }
    }
    printf("The merged sorted array is\n");
 for(int i=0;i<n1;i++)
    {
        printf("%d  ",A[i]);
    }
     for(int i=0;i<n2;i++)
    {
        printf("%d  ",B[i]);
    }
    
}
