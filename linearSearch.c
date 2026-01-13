#include<stdio.h>

int linearsearch(int arr[],int n,int key){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    
    return -1;
}


int main(){
    int arr[] = {9,55,42,65,33,67};
    int n = sizeof(arr) /sizeof(arr[0]);
    int key = 65;
    
    int i = linearsearch(arr,n,key);
    
    if(i==-1){
        printf("key is not found");
    }else{
        printf("key is founded %d",i);
    }
    
    return 0;
}