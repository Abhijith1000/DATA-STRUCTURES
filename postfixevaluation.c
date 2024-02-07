#include<stdio.h>
void main(){
    int a,b,c,i;
    char arr[20];
    int stack[20];
    int top=-1;
    printf("enter the postfix expression");
    scanf("%s", arr);
    for(i=0;arr[i]!='\0';i++){
        if( arr[i]=='+'){
            a=stack[top];
            top--;
            b=stack[top];
            top--;
            c=a+b;
            top++;
            stack[top]=c; }
           else if( arr[i]=='-'){
            a=stack[top];
            top--;
            b=stack[top];
            top--;
            c=a-b;
            top++;
            stack[top]=c; }
            else if( arr[i]=='*'){
            a=stack[top];
            top--;
            b=stack[top];
            top--;
            c=a*b;
            top++;
            stack[top]=c; }
            else if( arr[i]=='/'){
            a=stack[top];
            top--;
            b=stack[top];
            top--;
            c=a/b;
            top++;
            stack[top]=c; }
            else {
                top++;
                stack[top]=arr[i] - 48;
            }
        }
        printf("the answer is:");
        for(i=0;i<=top;i++){
            printf("%d",stack[0]);
        }
    }
