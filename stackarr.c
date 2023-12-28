# include <stdio.h>
void main (){
int a[10],top,x,i,ch;
top=-1;
 void push(){
    if(top==9){
        printf("stack overflow");
    }
    else{
        top++;
        printf("enter data:");
        scanf("%d",&a[top]);
         } }

 void pop(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        printf("element deleted:%d\n",a[top]);
        top--;
    }
 }

 void peek(){
     if(top==-1){
        printf("stack underflow");
    }
     else{
        printf("peeked element:%d\n",a[top]);}

 }

 void display(){
    for(i=top;i>=0;i--){
        printf("%d\t",a[i]);
    }
 }

 do{
     printf("push:1\tpop:2\tpeek:3\tdisplay:4\n");
 printf("\npress 0 to exit\n");
scanf("%d",&ch);
    switch (ch){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: peek();
        break;
        case 4: display();
        break;
        case 0: printf("stack exited");
        break;
        default: printf("invalid input");
        break;
    }
 } while(ch!=0);}











