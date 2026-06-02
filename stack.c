#include<stdio.h>

int arr[5];
int top=-1;

void push(){
    if(top==5){
        printf("overflow\n");
    }
    else{
    top++;
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    arr[top]=x;
    }  
}

void pop(){
    if(top==-1){
        printf("underflow\n");
    }
    else{
        top--;
    }   
}

void peek(){
    if(top==-1){
        printf("underflow\n");
    }
    else{
        printf("%d",arr[top]);
    }
}

void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",arr[i]);
    }
}


int main(){
    while(1){
        int ch;
        printf("1=push,2=pop,3=peek,4=display,5=exit\n");
        scanf("%d",&ch);
        if(ch==1){
            push();
        }
        else if (ch==2){
            pop();
        }
        else if (ch==3){
            peek();
        }
        else if(ch==4){
            display();
        }
        else{
            break;
        }

    }

}