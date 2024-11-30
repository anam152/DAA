#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selectionSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(&a[i],&a[min]);
		}
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
	printf("Array elements after selection sort :");
	selectionSort(a,n);
	for(int i=0;i<n;i++){
	printf("%d   ",a[i]);
        }
}
