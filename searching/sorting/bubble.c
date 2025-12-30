#include<stdio.h>
#include<stdlib.h>
#define max 10000

void swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}

void bubbleSort(int arr[],int n){  //swapping the adjacent elemnts
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
            
        }
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
   
    bubbleSort(arr,n);
    printf("the sorted elements:");
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    

    return 0;
    }