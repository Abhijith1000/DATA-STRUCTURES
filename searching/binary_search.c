#include<stdio.h>
void main(){
    int i,n,sk,a[20],mid,l,h,p=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the search key:");
    scanf("%d",&sk);
    l=0;
    h=n-1;
     while(l<=h){
        mid=(l+h)/2;
        if(sk==a[mid]){
             printf("element found at %dth index",mid);
             break;
        }
        else if(sk<a[mid]){
            h=mid-1;
        }
        else if(sk>a[mid]){
            l=mid+1;
        }
        else{
            printf("element not found");
        }

     }
    
}