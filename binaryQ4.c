#include<stdio.h>

int insert_position(int arr[],int n,int num){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==num){
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
    return low;
}

int main(){
    int arr[]={1,3,5,6};
    int res= insert_position(arr,4,4);
    printf("%d",res);

}