#include <stdio.h>
void main(){
    int i,j,n,a[20],temp;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("enter the array elements:\t");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the sorted array is:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}