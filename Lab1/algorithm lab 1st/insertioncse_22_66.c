#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    
    // Traverse through 1 to n-1
    for (i = 1; i < n; i++) {
        key = arr[i]; // Element to be inserted
        j = i - 1;
        
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    insertionSort(arr, n);
    
    printf("Sorted array using Insertion Sort: \n");
    printArray(arr, n);
    
    return 0;
}
