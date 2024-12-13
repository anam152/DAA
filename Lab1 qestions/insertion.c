#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
<<<<<<< HEAD
   int n;
   printf("Enter the size of an array");
   scanf("%d" , &n);
   int arr[n];
   printf("Enter the elements of the array");
   for(int i=0;i<n;i++){
    scanf("%d" , &arr[i]);
   }
=======
    int n;
     printf("Enter the array size");
     scanf("%d" ,&n);
     int array[n];
     printf("Enter the size of array");
     for(int i=0;i<n;i++){
        printf("%d" , array[i]);
     }
>>>>>>> 142649a1918da1fecbaec67d01b8c4ce6e85b1fe
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
