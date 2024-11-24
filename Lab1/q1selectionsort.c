# include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Selection(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        j = k = i;
        while (j < n)
        {
            if (A[j] < A[k])
                k = j;
            j++;
        }
        swap(&A[k], &A[i]);
    }
}
int main()
{
    int A[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};

  Selection(A,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
       
    return 0;
}