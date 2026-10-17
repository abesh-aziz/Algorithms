#include <stdio.h>
void merge(int A[], int lb, int mid, int ub);
void div(int A[], int lb, int ub);
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    div(arr, 0, n-1);
    printf("\nSorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void merge(int A[], int lb, int mid, int ub){
    int temp[ub-lb+1];
    int i=lb;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=ub){
        if(A[i]<A[j]){
            temp[k]=A[i];
            i++;
            k++;
        }
        else{
            temp[k]=A[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        temp[k]=A[i];
        i++;
        k++;
    }

    while(j<=ub){
        temp[k]=A[j];
        k++;
        j++;
    }

    for(i=lb, k=0; i<=ub; i++, k++){
        A[i]=temp[k];
    }
}

void div(int A[], int lb, int ub){
    int mid=(lb+ub)/2;
    if(lb<ub){
        div(A, lb, mid);
        div(A, mid+1, ub);
        merge(A, lb, mid, ub);
    }
}
