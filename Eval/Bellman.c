#include<stdio.h>
#include<stdlib.h>
#define V 5
#define E 8
#define INF 999999
struct edge{
int src;
int des;
int weight;
};
void Bellman_ford(struct edge edge[])
{
    int dist[V];
    dist[0]=0;
    for(int i=1;i<V;i++)
    {
        dist[i]=INF;
    }
    for(int i=0;i<V-1;i++)
    { 
        for(int j=0;j<E;j++)
        {
            int u=edge[j].src;
            int v=edge[j].des;
            int w=edge[j].weight;
            if(w+dist[u]<dist[v])
            {
                dist[v]=w+dist[u];
            }
        }
}
for(int i=0;i<E;i++)
{
    int u=edge[i].src;
            int v=edge[i].des;
            int w=edge[i].weight;
            if(w+dist[u]<dist[v])
            {
                dist[v]=w+dist[u];
                printf("There exits a negative cycle\n");
                return;
            }
        } 
        printf("Shortest path is:\n");
    for(int i=0;i<V;i++)
    {
        printf("%d->%d\n",i,dist[i]);
    }

}
int main()
{
   struct edge Edges[E]={
     {0, 1, 5}, {0, 2, 4},
        {1, 3, 3}, {2, 1, 6},
        {3, 2, 2}, {1, 4, 7},
        {4, 3, -1}, {4, 2, -2}
   };
   Bellman_ford(Edges);

}