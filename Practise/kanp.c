#include<stdio.h>
int kanp(int v[],int wt[],int W,int n){
    if(n==0||W==0)
    return 0;
    if(wt[n-1]>W)
    return kanp(v,wt,W,n-1);
    int take=v[n-1]+kanp(v,wt,W-wt[n-1],n-1);
    int not_take=kanp(v,wt,W,n-1);
    return (take>not_take?take:not_take);
}
int main(){

    int v[]={2,3,5,2};
    int wt[]={4,2,5,6};
    int W=9;
    int n=4;
    int ans=kanp(v,wt,W,n);
    printf("%d max is",ans);
}