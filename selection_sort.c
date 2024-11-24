#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted array
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);

    selectionSort(arr, n);
    
    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}
