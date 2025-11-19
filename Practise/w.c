#include<stdio.h>
#define V 4
#define INF 9999
int main(){
    int graph[V][V]={
        {2,4,7,INF},
        {3,INF,4,1,},
        {3,9,8,3},
        {INF,2,INF,0}
    };
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(graph[i][k]+graph[k][j]<graph[i][j])
                graph[i][j]=graph[i][k]+graph[k][j];
            }
        }
    }
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            printf("%d",graph[i][j]);
        }
        printf("\n");
    }
}
