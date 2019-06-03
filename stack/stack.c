#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1,max=10;

void push(int item){
    if(top==max-1)
        printf("Stack overflow\n");
    else
        stack[++top]=item;
    return;
}

void pop(){
    if(top==-1)
        printf("Stack underflow\n");
    else{
        top--;
        printf("%d popped from the stack\n",stack[top+1]);
    }
    return;
}

void display(){
    printf("Elements in the order they were inserted\n");
    for(int i=0;i<=top;i++)
        printf("%d ",stack[i]);
    printf("\n");
}

int main(){
    int choice,value;
    while(1){
        printf("Enter what operation you want to perform\n");
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element to push\n");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Enter valid choice\n");
        }
    }
    return 0;
}