#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    int i;
    for(i = 0; i < 5; i++) 
        *(ptr+i)+=2;
    
    for(i = 0; i < 5; i++) 
        printf("%d ", arr[i]);

    return 0;
}