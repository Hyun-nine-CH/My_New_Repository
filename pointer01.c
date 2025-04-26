#include <stdio.h>

int main(void) {
    int num1=100, num2=100;
    int *pnum;

    pnum=&num1;
    (*pnum)+=30;
    printf("Address of num1: %p, num1: %d \n", (void*)&num1, num1);
    printf("Address of pnum: %p, pnum: %d \n", (void*)pnum, *pnum);
    printf("Value of pnum: %d \n", *pnum);
    printf("Value of pnum: %p \n", pnum);
    printf("Value of pnum: %p \n", *pnum);

    pnum=&num2;
    (*pnum)-=30;

    printf("num1:%d, num2:%d \n", num1, num2);
    return 0;
}