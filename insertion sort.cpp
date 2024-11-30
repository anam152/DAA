#include<stdio.h>
void InsertionSort(int a[],int n){
	int temp;
	for(int i=0;i<n;i++){
		temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
}
int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Array elements after insertion sort :");
	InsertionSort(a,n);
	for(int i=0;i<n;i++){
	printf("%d   ",a[i]);
        }
}
