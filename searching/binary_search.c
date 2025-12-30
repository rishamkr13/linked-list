#include<stdio.h>
#include<stdlib.h>
#define max 1000
int binarySearch(int arr[],int n,int item){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    
    
    while(start<=end){
          if(item==arr[mid])
          return mid;
    
    if (item>arr[mid]){
       start = mid + 1;
     } else{
        end = mid - 1;
     }
     mid=(start+end)/2;
}
return -1;
}
int main(){
    int arr[max],n ,  i, item;
    printf("enter the number of array:");
    scanf("%d", &n);
    printf("enter the elements of the array:");
    for(i=0;i<n;i++){
    scanf("%d" ,&arr[i]);
    }
    
    printf("the item to be searched:");
    scanf("%d" , &item);

   int result= binarySearch(arr,n, item);
   if(result!=-1){
       printf("teh item is found ar index %d \n" ,result);
   }else{
       printf("the item is not in the array");
   }
   
    return 0;
}


