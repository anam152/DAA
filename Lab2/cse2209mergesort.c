# include <stdio.h>
# include <stdlib.h>

void Display(int *a, int n)
{
	int i;
	for( i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
		
	}
	printf("\n");
}

void merge(int *a, int low, int mid, int high)
{
	int temp[100];
	int i = low, j = mid+1, k = low;
	while(i <= mid && j<=high)
	{
		if(a[i] <= a[j])
		{
			temp[k++] = a[i++];
		}
		else if(a[j]<=a[i])
		{
			temp[k++] = a[j++];
		}
	}
	for( ; i<=mid;i++)
	{
		temp[k++] = a[i];
	}
	for(; j <=high; j++)
	{
		temp[k++] = a[j];
	}
	
	for(i = low; i<=high; i++)
	{
		a[i] = temp[i];
	}
}

void merge_sort(int *a, int low, int high)
{
	if(low>=high)return;
	int mid = (low+high)/2;
	merge_sort(a,low,mid);
	merge_sort(a, mid+1, high);
    merge(a, low, mid, high);
}

int main()
{
	int *a;
	int i;
	int n;
	printf("Enter size of the array\n");
	scanf("%d", &n);
	if(n==0)
	{
		printf("Not a valid input\n");
		return 0;
	}
	a = (int*)malloc(sizeof(int) * n);
	printf("Enter elements of the array\n");
	for( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	Display(a,n);
	merge_sort(a,0,n-1);
	
	printf("After merge sort: \n");
	Display(a,n);
	
	
}
