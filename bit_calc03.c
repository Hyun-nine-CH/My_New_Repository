#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main(void) {
    char ch=9;
    int inum=1052;
    double dnum=3.1415;
    printf("변수 ch의 크기: %d \n", sizeof(ch));
    printf("변수 inum의 크기: %d \n", sizeof(inum));
    printf("변수 dnum의 크기: %d \n", sizeof(dnum));

    printf("char의 크기: %d \n", sizeof(char));
    printf("int의 크기: %d \n", sizeof(int));
    printf("long의 크기: %d \n", sizeof(long));
    printf("long long의 크기: %d \n", sizeof(long long));
    printf("float의 크기: %d \n", sizeof(float));
    printf("double의 크기: %d \n", sizeof(double));

    printf("char : %lu\n", sizeof(int8_t));
    printf("short : %lu\n", sizeof(int16_t));
    printf("int : %lu\n", sizeof(int32_t));
    printf("long : %lu\n", sizeof(int64_t));
    printf("float : %lu\n", sizeof(float));
    printf("double : %lu\n", sizeof(double));
    return 0;
}