# include <stdio.h>
# define size 100

void Display(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
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
    int n = 0;
    printf("Enter the number of elements to be sorted\n");
    scanf("%d", &n);

    int A[size];
    printf("Enter elements to be sorted\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }


  Insertion(A,n);
  Display(A,n);
       
    return 0;
}