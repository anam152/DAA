# include <stdio.h>
# include <stdlib.h>


void Display(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}



void Insertion(int *A, int n)
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
    Insertion(a,n);
    printf("After performing insertion sort, the array is:\n");
    Display(a,n);
       
    return 0;
}