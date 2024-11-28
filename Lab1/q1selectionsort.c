# include <stdio.h>
# define size 100

void Display(int A[], int n){
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

void Selection(int A[], int n)
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

    int A[size];
    printf("Enter elements to be sorted\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }


  Selection(A,n);
    Display(A,n);
    
       
    return 0;
}