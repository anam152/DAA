#include<stdio.h>
#include<stdlib.h>
void selectionsort(int arr[],int n){
    int i,j,minimum,temp;
    for(i=0;i<n-1;i++){ 
        minimum=i;
        for(b=i+1;j<n;j++){ 
           if(arr[j]<arr[minimum]) 
              minimum=j; 
        }
        if(minimum != i){
        temp=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temp;
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
        printf("invalid");
        return 0;
    }
    int *arr=(int *)malloc(sizeof(int)*n);
   
    for(int i=0;i<n;i++){
        printf("Enter the element : \n");
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);
    selectionsort(arr,n);
    printf("After selectionsort,the array is:\n");
    printarray(arr,n);
}
