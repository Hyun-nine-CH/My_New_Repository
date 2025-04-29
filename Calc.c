/*
#include <stdio.h>

float odd(int n1, int n2) {
    return n1 + n2;
}

float minus(int n1, int n2) {
    return n1 - n2;
}

float mul(int n1, int n2) {
    return n1 * n2;
}

float div(int n1, int n2) {
    if (n2 == 0)
        printf("0으로 나눌 수 없습니다.\n");
    else
        return (float)n1 / n2;
}

int main(void) {
    int n1, n2;
    char op;
    float result;

    printf("첫 번째 숫자와 연산자 그리고 두 번째 숫자를 입력하세요: ");
    scanf("%d %c %d", &n1, &op, &n2);

    switch (op) {
        case '+':
            result = odd(n1, n2);
            break;
        case '-':
            result = minus(n1, n2);
            break;
        case '*':
            result = mul(n1, n2);
            break;
        case '/':
            result = div(n1, n2);
            break;
        default:
            printf("잘못된 연산자입니다.\n");
            return 1;
    }

    printf("결과: %.2f\n", result);
    return 0;
}
*/

#include <stdio.h>

float add(int n1, int n2);
float minus(int n1, int n2);
float mul(int n1, int n2);
float div(int n1, int n2);

int main(void)
{
  int n1, n2;
  char op;
  float result;

  printf("input num1 op num2 : ");
  scanf("%d %c %d", &n1, &op, &n2);

  switch(op) {
    case '+': result=add(n1, n2); break;
    case '-': result=minus(n1, n2); break;
    case '*': result=mul(n1, n2); break;
    case '/': result=div(n1, n2); break;
  }
  printf("%d %c %d = %f\n", n1, op, n2, result);
  return 0;
}

float add(int n1, int n2)
{
  return n1 + n2;
}

float minus(int n1, int n2)
{
  return n1 - n2;
}

float mul(int n1, int n2)
{
  return n1 * n2;
}

float div(int n1, int n2)
{
  return n1 / (float)n2;
}