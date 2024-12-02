#include<stdio.h>
#include<stdlib.h>
void insertionsort(int a[],int n){
    int i,j,key;
    for(i=1;i<n;i++){ 
        key=a[i];
        j=i-1;
        while(x>=0 && a[j]>key){ 
            a[j+1]=a[j];  
            x--;
        }
        a[j+1]=key;
    }
}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    if(n==0){
        printf("invalid");
        return 0;
    }
    int *a=(int *)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        printf("Enter the element: \n");
        scanf("%d",&a[i]);
    }
    printarray(a,n);
    insertionsort(a,n);
    printf("After insertionsort:\n");
    printarray(a,n);
}
