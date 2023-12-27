#include<stdio.h>
void main (){
    int i,n,sk,a[20];
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the search key:");
    scanf("%d",&sk);
    for(i=0;i<n;i++){
        if(a[i]==sk);
        printf("element found at %dth index",i);
        break;
    }

}