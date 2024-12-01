#include <stdio.h>

void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void insertionSort(int arr[], int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    inputArray(arr, size);

    printf("\nArray before sorting:\n");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("\nArray after sorting:\n");
    printArray(arr, size);

    return 0;
}

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
    }
}
