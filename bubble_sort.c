# include<stdio.h>
void main (){
    int a[20];
    int i,j,n,temp;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    printf("the sorted array:\t");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
