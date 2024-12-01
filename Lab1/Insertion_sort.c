#include<stdio.h>
#include<stdlib.h>
void insertionsort(int a[],int n){
    int i,x,key;
    for(i=1;i<n;i++){ 
        key=a[i];
        x=i-1;
        while(x>=0 && a[x]>key){ 
            a[x+1]=a[x];  
            x--;
        }
        a[x+1]=key;
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