#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the no of heights\n");
    scanf("%d",&n);
    int H[n],Max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&H[i]);
    }
    for(int i=0;i<n;i++)
    {
        int j=i,k=i;
        while(j>=0&&H[j]>=H[i])
            {
                j--;
            } 
            while(k<n&&H[k]>=H[i])
            {
                k++;
            }
    int h=(k-j-1)*H[i]; 
    if(h>Max)
    {
        Max=h;
        }  
    }
    printf("Max Area:%d\n",Max);
}