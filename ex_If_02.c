#include <stdio.h>

int main(void) {
    int opt;
    double num1, num2;
    double result;

    printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
    printf("원하는 연산을 선택하세요: ");
    scanf("%d", &opt);
    printf("두 개의 실수를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);

    if(opt==1)
        result = num1 + num2;
    if(opt==2) 
        result = num1 - num2;
    if(opt==3) 
        result = num1 * num2;
    if(opt==4) 
        result = num1 / num2;
    
printf("결과: %.2lf \n", result);
    return 0;
    
}