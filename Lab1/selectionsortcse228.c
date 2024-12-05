#include<stdio.h>
void selectionsort(int arr[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){ 
        min=i;
        for(j=i+1;j<n;j++){ 
           if(arr[j]<arr[min]) 
              min=j; 
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={10,23,54,67,43,2};
    int n=6;
    printarray(arr,n);
    selectionsort(arr,n);
    printarray(arr,n);
}