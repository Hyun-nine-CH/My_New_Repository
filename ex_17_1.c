#include <stdio.h>

void MaxAndMin(int *arr, int size, int **mxptr, int **mnPtr) {
    int *max, *min;
    int i;

    max=min=&arr[0];
    for(i=0; i<size; i++) {
        if(*max < arr[i]) {
            max=&arr[i];
        }
        if(*min > arr[i]) {
            min=&arr[i];
        }
    }
    *mxptr = max;
    *mnPtr = min;
}

int main(void) {
    int * maxPtr;
    int * minPtr;
    int arr[5];
    int i;

    for(i=0; i<5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
    printf("Max: %d\n", *maxPtr);
    printf("Min: %d\n", *minPtr);
    return 0;
}