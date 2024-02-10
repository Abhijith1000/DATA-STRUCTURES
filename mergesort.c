#include<stdio.h>
void merge(int a[],int low,int mid,int high){
    int b[high+1];
    int x=low;
    int y=mid+1;
    int i=0;

    while(x<=mid && y<=high){
        if(a[x]<=a[y]){
            b[i]=a[x];
            x++;
            i++;}
        else{
            b[i]=a[y];
            y++;
            i++;
        }
        }
   while(x<=mid){
        b[i]=a[x];
        i++;
        x++; }
    while(y<=high){
        b[i]=a[y];
        i++;
        y++;
        }
    
    for(int i=low;i<=high;i++){
        a[i]=b[i-low];
    }
}

void sort(int a[],int low,int high){
    if(low<high){
    int mid=(low+high)/2;
    sort(a,low,mid);
    sort(a,mid+1,high);
    merge(a,low,mid,high);
}}


void main(){
    int a[20];
    int i,n, high,low,mid;
    printf("enter the size of array");
    scanf("%d",&n);
    high=n-1;
    low=0;
    printf("enter the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
sort(a,low,high);
printf("the sorted array:");
for (i=0;i<n;i++){
    printf("%d",a[i]);
}
}

