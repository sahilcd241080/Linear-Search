#include<stdio.h>

int LinearSearch(int arr[],int n,int key){
    
    if(n==0){
        return -1;
    }
    
    if(arr[n-1]==key){
        return n-1;
    }
    
    return LinearSearch(arr,n-1,key);
}

int main(){
    int arr[] = {69,79,34,67,45,68,23,55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 34;
    int i = LinearSearch(arr,n,key);
    if(i==-1){
        printf("index is not found");
    }else{
        printf("index is %d",i);
    }
    
    return 0;
}