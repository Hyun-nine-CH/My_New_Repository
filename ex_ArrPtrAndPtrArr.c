#include <stdio.h>

int main(void) {
    int n1=10, n2=20, n3=30, n4=40;
    int arr2d[2][4]={1,2,3,4,5,6,7,8};
    int i, j;

    int * whoA[4]={&n1, &n2, &n3, &n4};
    int (*whoB)[4]=arr2d;

    printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
    for(i=0; i<2; i++) {
        for(j=0; j<4; j++)
            printf("%d ", whoB[i][j]);
        printf("\n");
    }
    return 0;
}