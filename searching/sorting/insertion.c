#include<stdio.h>
#include<stdlib.h>
#define max 10000


void insertionSort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
    int temp=arr[i];
     int j=i-1;
     for(;j>=0;j--){
         if(arr[j]>temp){
             arr[j+1]=arr[j];
         }
         else{
             break;
         }
     }
        arr[j+1]=temp;
    }
}

int main(){
    int n,arr[max],i,j;
    printf("enter the number of elemetns:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
  
    insertionSort(arr,n);
    printf("the sorted elements:");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    

    return 0;
    }