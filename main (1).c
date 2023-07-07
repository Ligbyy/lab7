#include <stdio.h>

void printArr(int arr[],int n){
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int arr[],int a, int b ){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int bubbleSort(int arr[], int n,int swaps[]){
int count;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                swap(arr,j,j+1);
                swaps[j]++;
            }

        }

    }

}

int main() {
    int swaps[] = {0,  0,  0,  0,  0,  0,  0,  0,  0};
    int arr[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    printf("Before sorting:\n");
    printArr(arr,9);
int count = bubbleSort(arr,9,swaps);
    printf("After sorting:\n");
    printArr(arr,9);
    printf("Number of swaps per index in the array in order from index 0 to 8:\n");
    printArr(swaps,9);

    return 0;
}
