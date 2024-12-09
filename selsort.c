// selection sort
#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    
    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted part
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // Update the index of the minimum element
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
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

// Main function to test the selection sort
int main() {
    int arr[] = {64, 25, 12, 22, 11}; // Example array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    selectionSort(arr, n); // Call selection sort function
    
    printf("Sorted array: \n");
    printArray(arr, n); // Print the sorted array
    
    return 0;
}