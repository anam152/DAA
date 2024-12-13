# include <stdio.h>

// Function to swap two elements in the array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to place the pivot element in the correct position
// and arrange elements such that smaller elements are on the left
// and larger elements are on the right
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the rightmost element as the pivot
    int i = (low - 1);  // Index of smaller element

    // Iterate over the array and rearrange elements based on pivot
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Place the pivot in the correct position
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);  // Return the pivot index
}

// Quick Sort function that recursively sorts the array
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the pivot index such that arr[pivot] is in the correct position
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test quick sort
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};  // Example array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);  // Call quick sort

    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
