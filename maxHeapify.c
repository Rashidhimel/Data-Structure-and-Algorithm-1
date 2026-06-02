#include<stdio.h>

void maxHeapify (int a[],int  i){
    int l=i*2;
    int r = i*2+1;
    int largest;
    if (l<=a[0] && a[l]>a[i]){
        largest=l;
    }
    else{
        largest=i;
    }
    if(r<=a[0]&& a[r]>a[largest]){
        largest=r;
    }
    if(largest!=i){
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        maxHeapify(a,largest);
    }
}



void buildHeap(int arr[]){
    int n=arr[0];
    for(int i=n/2;i>=1;i--){
        maxHeapify(arr,i);
    }
}



void heapsort(int arr[]){
    while(arr[0]!=0){
     printf("%d ",arr[1]);
    arr[1]=arr[arr[0]];
    arr[0]--;
    maxHeapify(arr,1);
    }
      
}


int maximum(int arr[]){
    return arr[1];
}


int extractmax(int arr[]){
    int max=arr[1];
    arr[1]=arr[arr[0]];
    arr[0]--;
    maxHeapify(arr,1);
    return max;

}


void increasekey(int arr[],int idx,int key){
    if(arr[idx]>=key){
        return;
    }

    
    arr[idx]=key;
    while(idx!=1){
        int par=idx/2;
     if(arr[idx]>arr[par]){  
       int temp=arr[par];
       arr[par]=arr[idx];
       arr[idx]=temp;
       idx=par;
     }

     else{
        break;
     }
    }
    
}


void insert(int arr[],int key){
    arr[0]++;
    arr[arr[0]]=-100;
    increasekey(arr,arr[0],key);
}


int main (){
    int arr[20]={11,6,14,20,8,7,9,3,2,4,1,5};
        //maxHeapify(arr,1);
    buildHeap(arr);
        for(int i=1;i<=arr[0];i++){
         printf("%d ",arr[i]);
         }
    printf("\n");
   // heapsort(arr);


   insert(arr,18); 
      for(int i=1;i<=arr[0];i++){
         printf("%d ",arr[i]);
     }

 printf("\n");
       
   
   increasekey(arr,5,21);
    for(int i=1;i<=arr[0];i++){
         printf("%d ",arr[i]);
     }


    

     

   
}