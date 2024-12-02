#include <stdio.h>


void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void selectionsort(int* a,int n){
int temp;
for (int i = 0; i < n; i++)
{
    int min_idx=i;
    for (int j = i+1; j < n; j++)
    {
        if(a[j]<a[min_idx]){
            min_idx=j;
        }
    }
temp=a[i];
a[i]=a[min_idx];
a[min_idx]=temp;
    
}

}
int main()
{

    int arr[] = {7, 11, 8, 17, 4};
   
    printf("array before sort:");
    printArray(arr, 5);
   selectionsort(arr, 5);
    printf("array after sort:");
    printArray(arr, 5);
    return 0;
}