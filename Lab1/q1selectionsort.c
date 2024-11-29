# include <stdio.h>
# include <stdlib.h>


void Display(int *a, int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Selection(int *A, int n)
{
    int i, j, minindex;
    for (i = 0; i < n - 1; i++)
    {
         minindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[minindex])
                minindex = j;
            
        }
        if(minindex!=i)
        swap(&A[minindex], &A[i]);
    }
}
int main()
{
    int n = 0;
    printf("Enter the number of elements to be sorted\n");
    scanf("%d", &n);
    if(n == 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    int *a;
    a = (int*)malloc(sizeof(int) * n);

    printf("Enter elements to be sorted\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    Display(a,n);
    Selection(a,n);
    printf("After performing selection sort, the array is:\n");
    Display(a,n);
       
    return 0;
}