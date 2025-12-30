#include<stdio.h>
#include<stdlib.h>
#define max 100
int main(){
    int n, arr[max],i,item;
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("the elements of the array:");
    for(i=0;i<n;i++)
    printf("%d ", arr[i]);
    printf("\n");
    printf("the elements to be searched:");
    scanf("%d", &item);
    i=0;
    while(i<n){
        if(arr[i]==item){
                printf("the item is: %d \n" , i);
                exit(0);
        }
        i++;
    }
  if(i>=n){
    printf("item not found");
    exit(0);
  }

  return 0;
}