#include  <stdio.h>
void insertionsort(int A[], int N);

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
    insertionsort(arr, n);
    printf("\nSorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);

    }
}
void insertionsort(int A[], int N){
    for(int k=1; k<N; k++){
        int temp = A[k];
        int i=k-1;

        while(i>=0 && temp<A[i]){
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = temp;
    }
}


