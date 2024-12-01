#include<stdio.h>
#include<stdlib.h>
void selectionsort(int arr[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){ 
        min=i;
        for(j=i+1;j<n;j++){ 
           if(arr[j]<arr[min]) 
              min=j; 
        }
        if(min != i){
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    if(n==0){
        printf("invalid input");
        return 0;
    }
    int *arr=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);
    selectionsort(arr,n);
    printf("After selectionsort,the array is:\n");
    printarray(arr,n);
}
