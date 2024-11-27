#include <stdio.h>
#include <stdlib.h>

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
    int n;

    printf("enter the size of array: ");
    scanf("%d",&n);

    //dynamically allocating the memory
    int * arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("memory allocation failed");
        return 0;
    }

    //input user data
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    selection_sort(arr,n);
    print(arr,n);
}