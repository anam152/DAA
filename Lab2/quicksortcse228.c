#include<stdio.h>
#include<stdlib.h>
int partition(int arr[],int low, int high){
    int pivot=arr[low];
    int left=low;
    int right=high;
    while(left < right){
        while(arr[left] <= pivot && left < high){
           left++;
        }
        while(arr[right] > pivot && right > low){
           right--;
        }
        if(left < right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
        }
    }
            int temp=arr[low];
            arr[low]=arr[right];
            arr[right]=temp;
            return right;

}
void quicksort(int arr[],int low,int high){
 if(low < high){
    int pIndex=partition(arr,low,high);
    quicksort(arr,low,pIndex-1);
    quicksort(arr,pIndex+1,high);
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
    quicksort(arr,0,n-1);
    printf("After quicksort,the array is:\n");
    printarray(arr,n);
}