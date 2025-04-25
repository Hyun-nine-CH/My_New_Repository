#include <stdio.h>

int main(void) {
    int arr1[5]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int arr3[5]={1,2,3};
    int arr1Len, arr2Len, arr3Len, i;

    printf("배열 arr1의 크기: %d \n", sizeof(arr1));
    printf("배열 arr2의 크기: %d \n", sizeof(arr2));
    printf("배열 arr3의 크기: %d \n", sizeof(arr3));

    arr1Len = sizeof(arr1) / sizeof(arr1[0]);
    arr2Len = sizeof(arr2) / sizeof(arr2[0]);
    arr3Len = sizeof(arr3) / sizeof(arr3[0]);

    for(i=0; i<arr1Len; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    
    for(i=0; i<arr2Len; i++) 
        printf("%d ", arr2[i]);
    printf("\n");
    
    for(i=0; i<arr3Len; i++) 
        printf("%d ", arr3[i]);
    printf("\n");
    
    return 0;
}