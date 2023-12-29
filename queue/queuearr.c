#include <stdio.h>
void main (){
    int a[10],i,x,front=-1,rear=-1,ch;
     
     void enqueue(){
        if(rear==9){
            printf("queue overflow\n");
        }
        else if(rear==-1){
            rear++;
            front++;
            printf("enter the data");
            scanf("%d",&a[rear]);
        }
        else{
            rear++;
            printf("enter the data:");
            scanf("%d",&a[rear]);
        }
     }

     void dequeue(){
        if(front==9||front==-1){
            printf("queue underflow\n");
        }
         else{
            printf("element dequeued:%d\n",a[front]);
            front++;
         }
    }

    void display(){
        for(i=front;i<=rear;i++){
            printf("%d\t",a[i]);
            printf("\n");
        }
    }

    do{
        printf("enqueue:1\tdequeue:2\tdisplay:3\t");
        printf("\npress 0 to exit\n");
        printf("enter choice:");
        scanf("%d",&ch);
    switch (ch){
        case 1: enqueue();
        break;
        case 2:dequeue();
        break;
        case 3: display();
        break;
        case 0: printf("queue exited");
        break;
        default: printf("invalid input");
        break;
    }
     } while(ch!=0);
    }
 















