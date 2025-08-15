#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the no of customers\n");
    int n;
    scanf("%d",&n);
    int A[n],five=0,ten=0;
    printf("Enter the amount each customer gives for lemonade\n");
    for(int i=0;i<n;i++)
    {
scanf("%d",&A[i]);
    }
for(int i=0;i<n;i++)
{
    if(A[i]==5)
    {
    five++;
    printf("No change is needed\n");
    }
    else if(A[i]==10)
    {
        if(five>0)
        { 
        five--;
        ten++;
        printf("Change is given to customer %d\n",i+1);
        }
        else{
            printf("Change cannot be given to customer %d\n",i+1);
            return 0;
        }
    }
    else if(A[i]==20)
    {
        if(ten>0&&five>0)
        { 
        ten--;
        five--;
        printf("Change is given to customer %d\n",i+1);
        }
        else if(ten==0&&five>2)
        {
        five=five-3;
        printf("Change is given to customer %d\n",i+1);
        }
        else{
            printf("Change cannot be given to customer %d\n",i+1);
            return 0;
        }
    }
}
printf("Change is given to every customer\n");
return 0;
}
