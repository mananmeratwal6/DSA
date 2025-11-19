#include<stdio.h>
#include<stdlib.h>
int partion(int *a,int lb,int ub){
    int pivot=a[lb];
    int down=lb,up=ub;
    while(down<up){
        while(down <= ub && a[down] <= pivot){
            down++;
        }
        while(a[up]>pivot){
            up--;
        }
        if(down<up){
       int temp = a[down];
    a[down] = a[up];
    a[up] = temp;
    }
}
    a[lb]=a[up];
    a[up]=pivot;
    return up;
}
void quick_sort(int *a,int lb,int ub){
    if(lb>=ub){
        return;
    }
        int mid=partion(a,lb,ub);
    
    quick_sort(a,lb,mid-1);
    quick_sort(a,mid+1,ub);

}
int main(){
    int *a,n;
    printf("enter n");
    scanf("%d",&n);
     a = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter element");
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;

}