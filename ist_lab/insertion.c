#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[],int n){
    for(int i = 1; i<n;i++){
        int key = arr[i];
        int j = i-1;

         // Shift elements of the sorted portion that are greater than the key
        while(arr[j]>key && j>=0){
            // Move the element one position to the right
            arr[j+1] = arr[j];
            j--;
        }
        // Place the key in its correct position in the sorted portion
        arr[j+1] = key;
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}

int main(){
    int n;

    printf("enter the size of array: ");
    scanf("%d",&n);

    //dynamically allocating the memory
    int * arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("memory allocation failed");
        return 0;
    }
    
    //input the user data
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);
    print(arr,n);
}