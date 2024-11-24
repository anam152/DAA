# include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void Insertion(int A[], int n)
{
    int i, j, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i];
        j = i - 1;

        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int A[] = {19, 3, 9, 10, 15, 6, 8, 12, 3, 6};

  Insertion(A,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
       
    return 0;
}