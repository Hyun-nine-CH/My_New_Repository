#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int * ptr = arr;
    int i;
    for(i=0; i < 5; i++) {
        *(ptr++) += 2;
    }
    for(i=0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}