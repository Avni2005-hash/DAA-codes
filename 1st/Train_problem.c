#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the no of trains\n");
    int n;
    scanf("%d",&n);
    int A[n],D[n];
    printf("Enter the arrival and depature time of train one by one\n");
    int platform=1;
      for(int i=0;i<n;i++)
    {
        scanf("%d %d",&A[i],&D[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
if(A[i]>A[j])
{
int temp=A[i];
A[i]=A[j];
A[j]=temp;
}
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
if(D[i]>D[j])
{
int temp=D[i];
D[i]=D[j];
D[j]=temp;
}
        }
    }
    int i=0,j=1,result=1;

while(i<n&&j<n)
{
if(D[i]<A[j])
{
    i++;
    platform--;
}
else if(D[i]>=A[j])
{
    j++;
    platform++;
}
if(platform>result)
{
    result=platform;
}
}
    printf("Platforms required:%d",result);
}