#include <iostream>
using namespace std;

void swapnum(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swapnum(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter " << i << "th element: ";
        cin >> arr[i];
    }
    
    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}