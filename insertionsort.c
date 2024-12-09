//insertion sort

#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    
    // Traverse through 1 to n
    for (i = 1; i < n; i++) {
        key = arr[i]; // Current element to be inserted
        j = i - 1;
        
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key; // Insert the key at the correct position
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

// Main function to test the insertion sort
int main() {
    int arr[] = {12, 11, 13, 5, 6}; // Example array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    insertionSort(arr, n); // Call insertion sort function
    
    printf("Sorted array: \n");
    printArray(arr, n); // Print the sorted array
    
    return 0;
}