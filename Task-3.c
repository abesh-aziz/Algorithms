#include <stdio.h>
void Merge(int A[], int lb, int mid, int ub);
void Divide(int A[], int lb, int ub);

int main(){
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
    printf("Enter Element %d: ", i+1);
    scanf("%d", &arr[i]);
    }
    printf("/n");
    printf("Unsorted Array\n");
    for(i=0; i<n; i++){
    printf("%d\t", arr[i]);
    }

    Divide(arr, 0, n-1);
    printf("\nMerge Sorted Array: ");
    for(i=0; i<n; i++){
    printf("%d\t", arr[i]);
    }
    return 0;
    }

    void Merge(int A[], int lb, int mid, int ub){
        int temp[ub-lb+1];
        int i=lb, j =mid+1, k= 0;
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
            j++;
            k++;
        }
        for(i=lb, k=0; i<=ub; i++, k++){
            A[i]=temp[k];
        }
    }

 void Divide(int A[], int lb, int ub){
        int mid =(lb+ub)/2;
        if(lb<ub){

            Divide(A, lb, mid);
            Divide(A, mid+1, ub);
            Merge(A, lb, mid, ub);
        }
    }


