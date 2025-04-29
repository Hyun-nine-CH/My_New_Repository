#include <stdio.h>

int main(void) {
    int n1=10, n2=20, n3=30;
    int *ptr1=&n1, *ptr2=&n2, *ptr3=&n3;
    
    int *ptrArr[]={ptr1, ptr2, ptr3};
    int **dptr=ptrArr;

    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d %d %d \n", **(dptr+0), **(dptr+1), **(dptr+2));
    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
    printf("%d %d %d \n", *(*dptr+0), *(*dptr+1), *(*dptr+2)); // 잘못된 예시
    printf("%d %d %d \n", *(*(dptr+0)), *(*(dptr+1)), *(*(dptr+2)));
    return 0;
}