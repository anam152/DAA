#include <stdio.h>

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
    int n = 9;
    int arr[] = {9,8,7,6,5,4,3,2,1};
    insertion_sort(arr,n);
    print(arr,n);
}