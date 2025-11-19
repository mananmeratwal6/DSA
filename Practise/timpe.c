#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float n,t;
    printf("enter no. of test cases");
    scanf("%f",&t);
    while (t--)
    {
        printf("enter no of elememrt");
        scanf("%f",&n);
        double ans=n*log10(n);
        printf("%d%f",n,ans);
    }
    
    return 0;
}