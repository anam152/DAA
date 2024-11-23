#include <stdio.h>

void selection_sort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        //store the index of smallest element
        int index = i;
        
        //check for the smallest element than at index "i"
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        //swap only if the smallest element is not already at index "i"
        if(index!=i){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}

void print(int arr[],int n){
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}

int main(){
    int n = 9;
    int arr[] = {9,8,7,6,5,4,3,2,1};
    selection_sort(arr,n);
    print(arr,n);
}