#include<stdio.h>
#include<stdlib.h>
int min(int w,int w2)
{
    return ((w<w2)?w:w2);
}
int main()
{
    int r,c;
    printf("Enter the no of rows\n");
    scanf("%d",&r);
    printf("Enter the no of columns\n");
    scanf("%d",&c);
    int M[100][100];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    int count=0,maxarea=0;
    int l=0,sr=0,er=0,sc=0,ec=0;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
            if(M[i][j]==1)
            {
                int width=c;
                for(int k=i;k<r&&M[k][j]==1;k++)
                {
                    int currentwidth=0;
                    for(int l=j;l<c&&M[k][l]==1;l++)
                    {
                        currentwidth++;
                    }
                    width=min(width,currentwidth);
                    int height=k-i+1;
                    int area=height*width;
                    if(area>maxarea)
                    {
                        sr=i;
                        er=k;
                        sc=j;
                        ec=j+width-1;
                        maxarea=area;
                    }

                }

            }
        }
    }
    printf("\n\n");
    for(int a=0;a<r;a++)
    {
        for(int b=0;b<c;b++)
        {
            if(a>=sr&&a<=er&&b>=sc&&b<=ec)
            {
                printf("* ");
            }
            else{
            printf("%d ",M[a][b]);
            }
        }
        printf("\n");
    }
    printf("Maxarea:%d\n",maxarea);
}