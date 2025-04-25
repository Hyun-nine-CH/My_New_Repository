#include <stdio.h>

int main(void) {
    int num1=10;
    int num2=(num1--)+2;

    printf("num1: %d \n", num1);
    printf("num2: %d \n", num2);
}

/*
a = a + 1;
a += 1;
b = a++; -> a=1, b=0 출력
b = ++a; -> a=1, b=1 출력
*/