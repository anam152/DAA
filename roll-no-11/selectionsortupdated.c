#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");rr
}

int main() {
int n ;
printf("enter the size of the array");
scanf("%d",&n);
    int arr[n] ;

for(int i = 0; i<n ;i++)
{  
printf("enter the %d element of the array ",i);
scanf("%d",&arr[i];
}
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
