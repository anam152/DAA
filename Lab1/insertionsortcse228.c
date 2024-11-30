#include<stdio.h>
#include<stdlib.h>
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
    insertionsort(arr,n);
    printf("After insertionsort,the array is:\n");
    printarray(arr,n);
}
