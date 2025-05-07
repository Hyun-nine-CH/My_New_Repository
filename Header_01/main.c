#include <stdio.h>

typedef struct div {
    int quotient;
    int remainder;
} Div;

extern Div IntDiv(int num1, int num2);

int main(void) {
    Div val=IntDiv(5,2);
    printf("몫: %d\n", val.quotient);
    printf("나머지: %d \n", val.remainder);
    return 0;
}

// 웬만하면 함수를 사용할 때, 원형을 먼저 선언해준다 (특히 C)