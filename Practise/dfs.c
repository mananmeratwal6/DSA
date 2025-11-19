#include<stdio.h>
#define N 5
int  graph[N][N]={
    {0,1,1,0,0},
    {1,0,0,1,1},
    {1,0,0,0,0},
    {0,1,0,0,1},
    {0,1,0,1,0}
};
int visited[N];
void dfs(int v){
visited[v]=1;
printf("%d  ",v);
for(int i=0;i<N;i++){
    if(graph[i][v]==1&&visited[i]==0){
        dfs(i);
    }
}
}
int main(){
    dfs(0);
    return 0;
}