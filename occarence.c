#include<stdio.h>
int firstoccer(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int result=-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            result=mid;
            high=mid-1;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
       
}

int lastoccer(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int res=-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            res=mid;
            low=mid+1;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
       
}

int main(){
    int arr[]={1,2,3,3,3,4,5,6};
    int hlw=firstoccer(arr,8,3);
    int hi=lastoccer(arr,8,3);
    printf("%d,%d",hlw,hi);
}