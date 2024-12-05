#include<stdio.h>
void insertionsort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){ 
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){ 
            arr[j+1]=arr[j];  
            j--;
        }
        arr[j+1]=key;
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
    insertionsort(arr,n);
    printarray(arr,n);
}