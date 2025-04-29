#include <stdio.h>

int main(void) {
    int i, j;

    /*  2차원 배열 초기화의 예 1  */
    int arr1[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    /*  2차원 배열 초기화의 예 2  */
    int arr2[3][3]={1,0,0,4,5,0,7,8,9}; // 예상된 결과가 안나오면 이렇게 1차원 배열로 초기화

    /*  2차원 배열 초기화의 예 3  */
    int arr3[3][3]={1, 2, 3, 4, 5, 6, 7};

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%d ", arr1[i][j]);
        printf("\n");
    }
    printf("\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%d ", arr2[i][j]);
        printf("\n");  
    }
    printf("\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%d ", arr3[i][j]);
        printf("\n");
    }
    return 0;
}