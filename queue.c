#include<stdio.h>

int arr[5];
int foont=-1;
int rear=-1;

void enqueue(int a){
    if(rear==4){
        printf("underflow\n");
    }
    else if(foont==-1&&rear==-1){
        foont=rear=0;
        arr[rear]=a;
        
    }
    else{
        rear++;
        arr[rear]=a;
    }
}

void dequeue(){
    if(foont==-1&&rear==-1){
        printf("underflow\n");
    }
    else if(foont==rear){
        foont=rear=-1;
    }
    else{
        foont++;
    }

}

void display(){
    if(foont==-1&&rear==-1){
        printf("empty");
    }
    else{
        for(int i=foont;i<=rear;i++){
            printf("%d ",arr[i]);
        }
    }
}

int main(){

}