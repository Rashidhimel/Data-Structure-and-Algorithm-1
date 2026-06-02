#include<stdio.h>

    int Binary(int arr[],int n,int num){
       int low=0;
    int high=4;
        
    
   
    while(low<high){
      int  mid =(low+high)/2;
        if(arr[mid]==num)
        {
            return mid;
        }
        else if(arr[mid]>num)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }


    }
    
}
int main(){
    int arr[]={1,3,5,7,9};
    int index=Binary(arr,5,5);
    printf("%d",index);
}