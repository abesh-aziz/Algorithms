#include <stdio.h>
void selectionsort(int A[], int N);
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
    selectionsort(arr, n);
    printf("\nSorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);

    }
}

void selectionsort(int A[], int N){
    for(int k=0; k<N-1; k++){
        //outer loop runs n-1 times
        int min = A[k];
        int loc = k;
        for(int i=k+1; i<N; i++){
          if(min>A[i]){
            min = A[i];
            loc = i;
          }
        }
        if(loc!=k){
            int temp = A[k]; //swap(A[k], A[loc])
            A[k] = A[loc];
            A[loc] = temp;
        }

}
}
