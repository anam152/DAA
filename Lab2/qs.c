# include <stdio.h>
# include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Display(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int partition_index(int a[], int low, int high)
{
    int i = low, j = high;
    while(i<j)
    {
        int pivot = a[low];
        while(a[i] <= a[low] && i<=high-1)
        {
            i++;
        }
        while(a[j] > a[low] && j>=low+1)
        {
            j--;
        }
        if(i < j)
            swap(&a[i], &a[j]);
    }
    swap(&a[low], &a[j]);
    return j;
}
void quick_sort(int a[], int low, int high)
{
    if(low < high)
    {
        int partitionIndex = partition_index(a,low,high);
        quick_sort(a,0,partitionIndex-1);
        quick_sort(a,partitionIndex+1, high);
    }
}
int main()
{
    int *a;
    int n;
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    if(n == 0)
    {
        printf("Not a valid input\n");
        return 0;
    }
    a = (int*)malloc(sizeof(int) * n);
    printf("Enter the elements of the array\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    Display(a,n);
    quick_sort(a,0,n-1);
    printf("After using quick sort, the array is: \n");
    Display(a,n);
}