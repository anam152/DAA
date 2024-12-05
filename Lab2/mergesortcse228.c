#include<stdio.h>
#include<stdlib.h>
#define M 100
void merge(int arr[],int low,int mid,int high){
    int temp[M];
    int left=low;
    int right=mid+1;
    int i=low;
    while(left <=mid && right <=high){
        if(arr[left] <= arr[right]){
            temp[i]=arr[left];
            i++;
            left++;
        }
        else{
        temp[i]=arr[right];
        i++;
        right++;
        }
    }
    while(left <=mid){
        
            temp[i]=arr[left];
            i++;
            left++;
        
    }
     while(right <=high){
       
            temp[i]=arr[right];
            i++;
            right++;
        
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i];
    }
}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    printf("\n");

}
int main(){
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    if(n==0){
        printf("invalid input");
        return 0;
    }
    int *arr=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);
    mergesort(arr,0,n-1);
    printf("After mergesort,the array is:\n");
    printarray(arr,n);
}