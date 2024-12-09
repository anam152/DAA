//merge sort
#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of the first subarray
    int n2 = right - mid;     // Size of the second subarray
    
    // Create temporary arrays to hold the values of the subarrays
    int L[n1], R[n2];
    
    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    // Merge the temporary arrays back into the original array arr[]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copy any remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    // Copy any remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to divide the array into subarrays
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point of the array
        int mid = left + (right - left) / 2;
        
        // Sort the first half
        mergeSort(arr, left, mid);
        
        // Sort the second half
        mergeSort(arr, mid + 1, right);
        
        // Merge the two halves
        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test merge sort
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};  // Example array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    mergeSort(arr, 0, n - 1);  // Call merge sort
    
    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array
    
    return 0;
}