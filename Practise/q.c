#include<stdio.h>
#define max 100
int t[max];
int partion(int a[],int lb1,int ub1,int lb2,int ub2){
    int i=lb1,j=lb2,k=lb1;
    while(i<=ub1&&j<=ub2){
        if(a[i]<a[j])
        t[k++]=a[i++];
        else
        t[k++]=a[j++];
    }
    while(i<=ub1){
        t[k++]=a[i++];
    }
    while(j<=ub2){
        t[k++]=a[j++];
    }
    for(int i=lb1;i<=ub2;i++){
        a[i]=t[i];
    }

}
void quick(int a[],int lb,int ub){
    if(lb>=ub)
    return;
    int mid =(lb+ub)/2;
    quick(a,lb,mid);
    quick(a,mid+1,ub);
    partion(a,lb,mid,mid+1,ub);
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[max];
    for(int i=0;i<n;i++){
        printf("enter element %d ",i+1);
        scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("eleent is %d",a[i]);
    }
}