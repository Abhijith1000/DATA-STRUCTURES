#include<stdio.h>
int partition(int a[],int low,int high){
    int i=low;
    int j=high;
    int pivot=low;
    int temp1,temp2;
    while(i<j){
        while(a[i]<=a[pivot]){
        i++;
        }
        while(a[j]>a[pivot]){
            j--;
        }
        if(i<j){
            temp1=a[j];
            a[j]=a[i];
            a[i]=temp1;

        }
        temp2=a[j];
        a[j]=a[pivot];
        a[pivot]=temp2;
        return j;

    }

}

void sort(int a[],int low,int high){
int j;
if(low<high){
    j=partition(a,low,high);
    sort(a,low,j-1);
    sort(a,j+1,high);
}
}


void main(){
    int a[20],i,high,low,n;
    printf("enter the size of array");
    scanf("%d",&n);
    high=n-1;
    low=0;
    printf("enter the elements");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    sort(a,low,high);
    printf("the sorted array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
