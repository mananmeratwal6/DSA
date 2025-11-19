#include<stdio.h>
#define V 5
#define INF 9999
int main(){
    int graph[V][V]={
         {0, 2, 4, 0, 0},
        {2, 0, 1, 7, 0},
        {4, 1, 0, 3, 5},
        {0, 7, 3, 0, 2},
        {0, 0, 5, 2, 0}
    };
    int d[V];
    int visited[V];
    int count ,nextNode,min;
   for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
    if(i!=j&&graph[i][j]==0)
graph[i][j]=INF;
   }
}
int source=0;
for(int i=0;i<V;i++){
    d[i]=graph[source][i];
    visited[i]=0;
}
d[source]=0;
visited[source]=1;
count=1;
while(count<V-1){
    min=INF;
for(int i=0;i<V;i++){
    if(d[i]<min&&!visited[i])
    min=d[i];
    nextNode=i;
}
visited[nextNode]=1;
for(int i=0;i<V;i++){
    if(!visited[i]){
        if(d[i]>min+graph[nextNode][i])
        d[i]=min+graph[nextNode][i];
    }
}count++;

}
for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
        printf("%d  ",graph[i][j]);
    }
    printf("\n");
}
}