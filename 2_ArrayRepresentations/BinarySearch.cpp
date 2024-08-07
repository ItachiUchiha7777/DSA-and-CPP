//this is Binary Search
#include <iostream>
int binarySearch(int arr[],int low,int high,int x){
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            low=mid+1;
        else 
            high=mid-1;


    }
    return -1;
}

int main(){
    int arr[] = {2, 3, 4, 10, 40};
    int x=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,0,n-1,x);
    printf("%d\n",result);
    if (result != -1)
        printf("Element is present at index %d", result);
    else
        printf("Element is not present in array");
}