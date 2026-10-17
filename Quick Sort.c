#include<stdio.h>

int partition(int A[],int start,int end);
void quickie(int A[],int start,int end);

int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    quickie(arr, 0, n-1);
    printf("\nQuick sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int partition(int A[], int start, int end){
    int pivot_index=start;
    int pivot = A[start];

    while(start<end){
        while(A[start]<=pivot && start<end){
            start++;
        }
        while(A[end]>pivot){
            end--;
        }
        if(start<end){ //swap(A[start], A[end]
            int temp = A[start];
            A[start]=A[end];
            A[end] = temp;
        }

        }
         //swap(A[end], A[pivot])
        int temp = A[pivot_index];
        A[pivot_index] = A[end];
        A[end] = temp;
        return end;
}

void quickie(int A[], int start, int end){
    if(start<end){
    int loc=partition(A, start, end);
    quickie(A, start, loc-1);
    quickie(A, loc+1, end);
}
}
