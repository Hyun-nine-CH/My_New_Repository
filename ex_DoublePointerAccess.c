#include <stdio.h>

int main(void) {
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);
    printf("%9g %9g \n", num, **dptr);
    ptr2 = *dptr;
    *ptr2 = 10.99; // 값을 변경하면 원본의 값이 변경됨
    printf("%9g %9g \n", num, **dptr);
    printf("%lu %lu \n", sizeof(*dptr), sizeof(**dptr));
    return 0;
}