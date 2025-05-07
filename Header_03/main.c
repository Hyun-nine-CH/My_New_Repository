#include <stdio.h>
#include "stdiv.h"
#include "intdiv3.h" // 중복 문제

int main(void) {
    Div val=IntDiv(5,2);
    printf("몫: %d \n", val.quotient);
    printf("나머지: %d \n", val.remainder);
    return 0;
}